from robotshyu import Robot as rob
import modern_robotics as mr
import numpy as np

np.set_printoptions(threshold=np.inf, linewidth=75, suppress=True)


robot = rob.Robot("indy7")

Blist = np.array([[2.3976928654100554e-23, -4.8965888601467475e-12, -4.8965888601467475e-12, 3.4618902214045736e-28, -1.1740516174705233e-34, 6.9237804428385345e-28], [9.793177720245541e-12, -1.0, -1.0, 4.8965888601227706e-12, -1.0, 0.0], [1.0, 9.793177720269518e-12, 9.793177720269518e-12, 1.0, 4.8965888601467475e-12, 1.0], [0.18650000000181666, -1.0279999999991043, -0.5779999999991041, 0.18300000000029382, -0.2280000000000002, 3.5413412302101557e-23], [-5.4425585180605675e-12, 5.03369334818734e-12, 2.830228361142882e-12, -1.380838058561384e-12, -4.0283652976134964e-24, -4.038963052882063e-28], [4.882824562617003e-23, -3.995616509902955e-12, -1.7921515228261296e-12, 6.761330479271026e-24, -8.226269285046539e-13, -1.2912850525166677e-28]])
dof = 6
M = np.array( [[1.0, 0.0, 0.0, 0.0], [0.0, 1.0, 0.0, -0.1865], [0.0, 0.0, 1.0, 1.3275], [0.0, 0.0, 0.0, 1.0]])

q = [0,0,0,0,0,0]
v = [1,0,1,0,0,0]

J_b = robot.J_b(q)
tmp = J_b[0:3,:]
J_b[0:3,:] = J_b[3:6,:]
J_b[3:6,:] = tmp
J_b=J_b.full()

Blist = robot.J_b([0,0,0,0,0,0])
tmp = Blist[0:3,:]
Blist[0:3,:] = Blist[3:6,:]
Blist[3:6,:] = tmp
Blist=Blist.full()

dJ_b = robot.dJ_b(q, v)
tmp = dJ_b[0:3,:]
dJ_b[0:3,:] = dJ_b[3:6,:]
dJ_b[3:6,:] = tmp
dJ_b=dJ_b.full()

# lie

Jb = Blist
dJb = np.zeros((6,6))
T = np.identity(4)
T_ = np.identity(4)

prev_dJidt=Blist[:,dof-1]*v[dof-1]
for i in range(dof-2, -1, -1):
    T_=T_@ mr.MatrixExp6(mr.VecTose3(-1*Blist[:,i+1]*q[i+1]))
    Jbi = mr.Adjoint(T_)@Blist[:,i]
    Jb[:,i] = Jbi
    dJb[:,i] = mr.ad(Jbi)@prev_dJidt
    prev_dJidt = prev_dJidt + Jbi*v[i]
