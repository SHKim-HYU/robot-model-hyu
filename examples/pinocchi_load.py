from robotshyu import Robot as rob
import pinocchio as pin
import numpy as np

robot = rob.Robot("indy7")

model = pin.buildModelFromUrdf(robot.urdf_path)
data = model.createData()

q = np.array([0, 0, 0, 0, 0, 0])
v = np.zeros((model.nv,1))
a = np.zeros((model.nv,1))

