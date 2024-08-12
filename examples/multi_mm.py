from robotshyu import Robot as rob
import numpy as np

np.set_printoptions(suppress=True, precision=6, linewidth=200)

robot = rob.Robot("hyumm_multi")
robot_l = rob.Robot("hyumm_offset_l")
robot_r = rob.Robot("hyumm_offset_r")

q=[1, 1, 0, 1, 2, 3, 4, 5, 6, 6, 5, 4, 3, 2, 1]
q_dot=[1, 1, 0, 1, 1, 1, 1, 1, 1, -1, -1, -1, -1, -1, -1]

q_l=[1,1,0,1,2,3,4,5,6]
q_r=[1,1,0,6,5,4,3,2,1]
q_dot_l=[1,1,0,1,1,1,1,1,1]
q_dot_r=[1,1,0,-1,-1,-1,-1,-1,-1]

M_wb=robot.M(q)
C_wb=robot.C(q,q_dot)

M1=robot_l.M(q_l)
C1=robot_l.C(q_l,q_dot_l)

M2=robot_r.M(q_r)
C2=robot_r.C(q_r,q_dot_r)

M_cb=np.zeros([15,15]); C_cb=np.zeros([15,15])

M_cb[0:3,0:3] = M1[0:3,0:3]+M2[0:3,0:3]
M_cb[0:3,3:9] = M1[0:3,3:9]; M_cb[0:3,9:15] = M2[0:3,3:9]
M_cb[3:15,0:3] = M_cb[0:3,3:15].T
M_cb[3:9,3:9] = M1[3:9,3:9]; M_cb[9:15,9:15] = M2[3:9,3:9]

C_cb[0:3,0:3] = C1[0:3,0:3]+C2[0:3,0:3]
C_cb[0:3,3:9] = C1[0:3,3:9]; C_cb[0:3,9:15] = C2[0:3,3:9]
C_cb[3:9,0:3] = C1[3:9,0:3]; C_cb[9:15,0:3] = C2[3:9,0:3]
C_cb[3:9,3:9] = C1[3:9,3:9]; C_cb[9:15,9:15] = C2[3:9,3:9]


J_wb = robot.J_b(q)
print(J_wb)
