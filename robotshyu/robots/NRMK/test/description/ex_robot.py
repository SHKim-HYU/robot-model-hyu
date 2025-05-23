from robotshyu import Robot as rob
import pybullet as p
import tf

robot = rob.Robot("indy_floating")
robot_inv = rob.Robot("indy_floating_inv")

p.connect(p.GUI)

robID = p.loadURDF(robot.urdf_path)
robinvID = p.loadURDF(robot_inv.urdf_path)

q=[0, 1.57079, 0]
for i in range(3):
	p.resetJointState(robID, i, q[i])


q=[0, -1.57079, 0]
for i in range(3):
	p.resetJointState(robinvID, i, q[i])
	

T = robot.fk([0,0,0,0,0,0,1,0,1.57079,0])[-1].full()
p.resetBasePositionAndOrientation(robinvID, T[0:3,3], tf.transformations.quaternion_from_matrix(T))
