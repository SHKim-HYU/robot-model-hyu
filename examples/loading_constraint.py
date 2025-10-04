from robotshyu import Robot as rob
import numpy as np

np.set_printoptions(suppress=True, precision=6, linewidth=200)

def ceil3(p):
    res = np.zeros([3,3])
    res[0,1] = -p[0]; res[1,0] = p[0]
    res[0,2] = p[1]; res[2,0] = -p[1]
    res[1,2] = -p[2]; res[2,1] = p[2]
    return res

def Adjoint(T):
    R = T[0:3,0:3]; p=T[0:3,3]
    Ad = np.zeros([6,6])
    Ad[0:3,0:3] = R; Ad[3:6,3:6] = R
    Ad[0:3,3:6] = ceil3(p)@R
    return Ad

def TransInv(T):
    R = T[0:3,0:3]; p=T[0:3,3]
    res = np.identity(4)
    res[0:3,0:3] = R.T
    res[0:3,3] = -R.T@p
    return res

robot1=rob.Robot("hyumm_floating")
robot2=rob.Robot("hyumm")
q_f=np.matrix([1,1,0,0,0,0,1,1,2,3,4,5,6]).T
qdot_f = np.matrix([1,1,0,0,0,0,1,1,1,1,1,1]).T
q=np.matrix([1,1,0,1,2,3,4,5,6]).T
qdot = np.matrix([1,1,0,1,1,1,1,1,1]).T
tau = np.matrix([1,0,0,0,0,0,0,0,0]).T

Toff = np.identity(4); Toff[0:3,3]=[0.0, -0.0, 0.0]
Adoff = Adjoint(Toff); Adinvoff = Adjoint(TransInv(Toff))
E0 = np.matrix([[np.cos(q[2,0]), np.sin(q[2,0]), 0],
                [-np.sin(q[2,0]), np.cos(q[2,0]), 0],
                [0,0,0],
                [0,0,0],
                [0,0,0],
                [0,0,1]])
dE0 = np.matrix([[-qdot[2,0]*np.sin(q[2,0]), qdot[2,0]*np.cos(q[2,0]), 0],
                [-qdot[2,0]*np.cos(q[2,0]), -qdot[2,0]*np.sin(q[2,0]), 0],
                [0,0,0],
                [0,0,0],
                [0,0,0],
                [0,0,0]])
E0inv = E0.T
if -qdot[2,0]!=0:
    dE0inv = np.matrix([[-np.sin(q[2,0])/qdot[2,0], -np.cos(q[2,0])/qdot[2,0], 0, 0, 0, 0],
                    [np.cos(q[2,0])/qdot[2,0], -np.sin(q[2,0])/qdot[2,0], 0, 0, 0, 0],
                    [0,0,0,0,0,0]])
else:
    dE0inv = np.matrix([[0,0,0,0,0,0],
                    [0,0,0,0,0,0],
                    [0,0,0,0,0,0]])

E0tilde = Adoff@E0
dE0tilde = Adoff@dE0
E0invtilde = E0inv@Adinvoff
dE0invtilde = dE0inv@Adinvoff

M1=robot1.M(q_f); C1=robot1.C(q_f,qdot_f); G1=robot1.G(q_f)
M1_BB = E0tilde.T@M1[0:6,0:6]@E0tilde; M1_BJ = E0tilde.T@M1[0:6,6:]; M1_JJ = M1[6:,6:]
C1_BB = E0tilde.T@(C1[0:6,0:6]@E0tilde+M1[0:6,0:6]@dE0tilde); 
C1_BJ = E0tilde.T@C1[0:6,6:]; C1_JB = C1[6:,0:6]@E0tilde+M1[0:6,6:].T@dE0tilde; 
C1_JJ = C1[6:,6:]
G1_B = E0tilde.T@G1[0:6]; G1_J = G1[6:]
M_1 = np.zeros([9,9]); C_1 = np.zeros([9,9]); G_1 = np.zeros([9,1])
M_1[0:3,0:3]=M1_BB; M_1[0:3,3:]=M1_BJ; M_1[3:,0:3]=M1_BJ.T; M_1[3:,3:]=M1_JJ
C_1[0:3,0:3]=C1_BB; C_1[0:3,3:]=C1_BJ; C_1[3:,0:3]=C1_JB; C_1[3:,3:]=C1_JJ
G_1[0:3]=G1_B; G_1[3:]=G1_J

qddot1 = np.linalg.pinv(M_1)@(tau-C_1@qdot-G_1)

M2=robot2.M(q); C2=robot2.C(q,qdot); G2=robot2.G(q)
qddot2 = robot2.fd(q,qdot,tau)


J_b1 = robot1.J_b(q_f)
Jb1 = np.zeros([6,9])
Jb1[:,0:3] = J_b1[0:6,0:6]@E0tilde
Jb1[:,3:] = J_b1[:,6:]

Jb2 = robot2.J_b(q)

