from robotshyu import Robot as rob
import numpy as np

np.set_printoptions(suppress=True, precision=6, linewidth=200)

robot = rob.Robot("hyumm_multi")
robot_l = rob.Robot("hyumm_offset_l")
robot_r = rob.Robot("hyumm_offset_r")

q=np.matrix([1, 1, 0, 1, 2, 3, 4, 5, 6, 6, 5, 4, 3, 2, 1]).T
q_dot=np.matrix([1, 1, 0, 1, 1, 1, 1, 1, 1, -1, -1, -1, -1, -1, -1]).T

q_l=np.matrix([1,1,0,1,2,3,4,5,6]).T
q_r=np.matrix([1,1,0,6,5,4,3,2,1]).T
q_dot_l=np.matrix([1,1,0,1,1,1,1,1,1]).T
q_dot_r=np.matrix([1,1,0,-1,-1,-1,-1,-1,-1]).T

M_wb=robot.M(q).full()
C_wb=robot.C(q,q_dot).full()
G_wb=robot.G(q).full()

M1=robot_l.M(q_l).full()
C1=robot_l.C(q_l,q_dot_l).full()
G1=robot_l.G(q_l).full()

M2=robot_r.M(q_r).full()
C2=robot_r.C(q_r,q_dot_r).full()
G2=robot_r.G(q_r).full()

M_cb=np.zeros([15,15]); C_cb=np.zeros([15,15]); G_cb=np.zeros([15,1])

M_cb[0:3,0:3] = M1[0:3,0:3]+M2[0:3,0:3]
M_cb[0:3,3:9] = M1[0:3,3:9]; M_cb[0:3,9:15] = M2[0:3,3:9]
M_cb[3:15,0:3] = M_cb[0:3,3:15].T
M_cb[3:9,3:9] = M1[3:9,3:9]; M_cb[9:15,9:15] = M2[3:9,3:9]

C_cb[0:3,0:3] = C1[0:3,0:3]+C2[0:3,0:3]
C_cb[0:3,3:9] = C1[0:3,3:9]; C_cb[0:3,9:15] = C2[0:3,3:9]
C_cb[3:9,0:3] = C1[3:9,0:3]; C_cb[9:15,0:3] = C2[3:9,0:3]
C_cb[3:9,3:9] = C1[3:9,3:9]; C_cb[9:15,9:15] = C2[3:9,3:9]

G_cb[0:3] = G1[0:3]+G2[0:3]
G_cb[3:9] = G1[3:]; G_cb[9:] = G2[3:]

F_ext=[1,0,0,0,0,0]
J_wb = robot.J_b(q)
print(J_wb.full().T@F_ext)
print(J_wb.full()@q_dot)
