import unittest
from robotshyu import Robot as rob
import numpy as np
from math import inf


class TestRobot(unittest.TestCase):
    def test_robotloader(self):
        # Kinova Gen3
        rob_kinova = rob.Robot(name="kinova")

        self.assertEqual(
            rob_kinova.ndof, 7, "Kinova Gen3 - should have 7 degrees of freedom"
        )

        lb = [-3.14, -2, -3.14, -2, -3.14, -2, -3.14]
        ub = [3.14, 2, 3.14, 2, 3.14, 2, 3.14]

        rob_kinova.set_joint_limits()
        self.assertTrue(
            (np.isposinf(rob_kinova.joint_ub.full())).all(),
            "Kinova Gen3 - joint_ub assert failed",
        )
        self.assertTrue(
            (np.isneginf(rob_kinova.joint_lb.full())).all(),
            "Kinova Gen3 - joint_lb assert failed",
        )
        rob_kinova.set_joint_limits(lb, ub)
        self.assertEqual(
            rob_kinova.joint_ub, ub, "Kinova Gen3 - joint_ub assert failed"
        )
        self.assertEqual(
            rob_kinova.joint_lb, lb, "Kinova Gen3 - joint_ub assert failed"
        )
        rob_kinova.set_joint_limits(lb[0:3], ub[0:3])
        self.assertTrue(
            (np.isposinf(rob_kinova.joint_ub.full())).all(),
            "Kinova Gen3 - joint_ub assert failed",
        )
        self.assertTrue(
            (np.isneginf(rob_kinova.joint_lb.full())).all(),
            "Kinova Gen3 - joint_lb assert failed",
        )
        rob_kinova.set_joint_limits(lb[0], ub[0])
        self.assertEqual(
            rob_kinova.joint_ub, ub[0], "Kinova Gen3 - joint_ub assert failed"
        )
        self.assertEqual(
            rob_kinova.joint_lb, lb[0], "Kinova Gen3 - joint_ub assert failed"
        )
        # print(rob_kinova.joint_ub)
        rob_kinova.set_joint_torque_limits()
        rob_kinova.set_joint_torque_limits(lb, ub)
        rob_kinova.set_joint_torque_limits(lb[0:4], ub[0:4])
        rob_kinova.set_joint_torque_limits(lb[0], ub[0])
        # TODO: add asserts for rest of set_*_limits

        rob_kinova.set_joint_velocity_limits()
        rob_kinova.set_joint_velocity_limits(lb, ub)
        rob_kinova.set_joint_velocity_limits(lb[0:4], ub[0:4])
        rob_kinova.set_joint_velocity_limits(lb[0], ub[0])

        rob_kinova.set_joint_acceleration_limits()
        rob_kinova.set_joint_acceleration_limits(lb, ub)
        rob_kinova.set_joint_acceleration_limits(lb[0:4], ub[0:4])
        rob_kinova.set_joint_acceleration_limits(lb[0], ub[0])

        arr_fromrobot = rob_kinova.fk([0, 0, 0, 0, 0, 0, 0])[rob_kinova.ndof].full()
        arr_expected = np.array(
            [
                [1, 0, 0, 6.1995e-05],
                [0, 1, 0, -2.48444537e-02],
                [0, 0, 1, 1.18738514],
                [0, 0, 0, 1],
            ]
        )
        self.assertTrue(
            np.linalg.norm(arr_fromrobot - arr_expected) < 1e-8,
            "Kinova Gen3 - forward kinematics assert failed",
        )

        self.assertEqual(
            rob_kinova.ndof,
            7,
            "Kinova Gen3 - should have 7 degrees of freedom (from json)",
        )

        x0 = [0, 1.5, 0, -1.3, 1, 3.14159]
        rob_kinova.set_state(x0)
        self.assertEqual(
            rob_kinova.get_initial_conditions,
            x0,
            "Kinova Gen3 - initial conditions / set state assert failed",
        )

if __name__ == "__main__":
    unittest.main()
