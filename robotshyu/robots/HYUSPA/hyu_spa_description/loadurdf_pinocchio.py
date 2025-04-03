from robotshyu import Robot as rob
import pinocchio as pin
import numpy as np

robot = rob.Robot('hyu_spa')
model = pin.buildModelFromUrdf(robot.urdf_path)
data = model.createData()

q = np.zeros((model.nq))
v = np.zeros((model.nv,1))
a = np.zeros((model.nv,1))

tau = pin.rnea(model, data, q, v, a)
