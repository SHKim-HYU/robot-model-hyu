# from numpy import sin, cos, tan
from casadi import vertcat, sumsqr, Function
from math import inf
from numbers import Real
import json
import casadi as cs
import numpy as np

class Robot:
    def __init__(self, name="kinova", analytical_derivatives=False):
        """Start the Robot.

        :param name: Robots name to load functions.
        :type name: string

        """

        self.name = name
        self.current_state = None
        self.joint_name = None
        self.joint_ub = None
        self.joint_lb = None
        self.joint_vel_ub = None
        self.joint_vel_lb = None
        self.joint_acc_ub = None
        self.joint_acc_lb = None
        self.torque_ub = None
        self.torque_lb = None
        self.gravity = vertcat(0, 0, -9.81)

        self.load_from_json(analytical_derivatives)

        self.states = []
        self.inputs = []
        self.parameters = []

        self.input_resolution = "acceleration"

    def set_name(self, name):
        """Allows to rename a robot. Useful for multi-robot implementations.

        :param name: Robots name to be set.
        :type name: string

        """
        self.name = name

    def set_kinematic_jacobian(self, q, name = 'rob_jac'):
        """Creates a function that computes the kinematic jacobian of the robot

        :param name: Name to be set for the returned function
        :type name: string

        :param q: The kinematic jacobian is computed for the frame of this joint number
        :type name: integer

        """

        # TODO: also add the geometric jacobian for the rotational part. Better to use pinocchio
        # interface to set this in the long term

        q_sym = cs.MX.sym("q", self.ndof, 1)

        # computing the jacobian
        fk = self.fk(q_sym)[q]
        jac = cs.jacobian(fk[0:3, 3], q_sym)
        jac_rot = cs.jacobian(fk[0:3, 0:3], q_sym)

        flag = False
        for i in range(self.ndof):
            jac_rot_mat = cs.mtimes(cs.reshape(jac_rot[:, i], 3, 3), fk[0:3, 0:3].T)

            if flag:
                jac_rot_vec = cs.horzcat(
                    jac_rot_vec, geometry.cross_mat2vec(jac_rot_mat)
                )

            else:
                jac_rot_vec = geometry.cross_mat2vec(jac_rot_mat)
                flag = True

        # constructing and returning the function
        jac_fun = cs.Function(name, [q_sym], [cs.vertcat(jac_rot_vec, jac)])
        self.trans_jacobian = jac_fun
        return jac_fun


    def set_joint_limits(self, lb=None, ub=None):
        # TODO: This should come from our Pinocchio's interface
        # TODO: Print some warning/error when size of lb and ub doesn't correspond to ndof
        ndof = self.ndof
        if ub == None:
            _ub = inf
            for i in range(1, ndof):
                _ub = vertcat(_ub, inf)
        elif isinstance(ub, Real):
            _ub = ub
        else:
            if len(ub) != ndof:
                _ub = inf
                for i in range(1, ndof):
                    _ub = vertcat(_ub, inf)
            else:
                _ub = ub

        if lb == None:
            _lb = -inf
            for i in range(1, ndof):
                _lb = vertcat(_lb, -inf)
        elif isinstance(lb, Real):
            _lb = lb
        else:
            if len(lb) != ndof:
                _lb = -inf
                for i in range(1, ndof):
                    _lb = vertcat(_lb, -inf)
            else:
                _lb = lb

        self.joint_ub = _ub
        self.joint_lb = _lb

    def set_joint_torque_limits(self, lb=None, ub=None):
        # TODO: This should come from our Pinocchio's interface
        # TODO: Print some warning/error when size of lb and ub doesn't correspond to ndof
        ndof = self.ndof
        if ub == None:
            _ub = inf
            for i in range(1, ndof):
                _ub = vertcat(_ub, inf)
        elif isinstance(ub, Real):
            _ub = ub
        else:
            if len(ub) != ndof:
                _ub = inf
                for i in range(1, ndof):
                    _ub = vertcat(_ub, inf)
            else:
                _ub = ub

        if lb == None:
            _lb = -inf
            for i in range(1, ndof):
                _lb = vertcat(_lb, -inf)
        elif isinstance(lb, Real):
            _lb = lb
        else:
            if len(lb) != ndof:
                _lb = -inf
                for i in range(1, ndof):
                    _lb = vertcat(_lb, -inf)
            else:
                _lb = lb

        self.joint_torque_ub = _ub
        self.joint_torque_lb = _lb

    def set_joint_velocity_limits(self, lb=None, ub=None):
        # TODO: This should come from our Pinocchio's interface
        # TODO: Print some warning/error when size of lb and ub doesn't correspond to ndof
        ndof = self.ndof
        if ub == None:
            _ub = inf
            for i in range(1, ndof):
                _ub = vertcat(_ub, inf)
        elif isinstance(ub, Real):
            _ub = ub
        elif isinstance(ub, cs.MX):
            _ub = ub
        else:
            if len(ub) != ndof:
                _ub = inf
                for i in range(1, ndof):
                    _ub = vertcat(_ub, inf)
            else:
                _ub = ub

        if lb == None:
            _lb = -inf
            for i in range(1, ndof):
                _lb = vertcat(_lb, -inf)
        elif isinstance(lb, Real):
            _lb = lb
        elif isinstance(lb, cs.MX):
            _lb = lb
        else:
            if len(lb) != ndof:
                _lb = -inf
                for i in range(1, ndof):
                    _lb = vertcat(_lb, -inf)
            else:
                _lb = lb

        self.joint_vel_ub = _ub
        self.joint_vel_lb = _lb

    def set_joint_acceleration_limits(self, lb=None, ub=None):
        # TODO: This should come from our Pinocchio's interface
        # TODO: Print some warning/error when size of lb and ub doesn't correspond to ndof
        ndof = self.ndof
        if ub == None:
            _ub = inf
            for i in range(1, ndof):
                _ub = vertcat(_ub, inf)
        elif isinstance(ub, Real):
            _ub = ub
        elif isinstance(ub, cs.MX):
            _ub = ub
        else:
            if len(ub) != ndof:
                _ub = inf
                for i in range(1, ndof):
                    _ub = vertcat(_ub, inf)
            else:
                _ub = ub

        if lb == None:
            _lb = -inf
            for i in range(1, ndof):
                _lb = vertcat(_lb, -inf)
        elif isinstance(lb, Real):
            _lb = lb
        elif isinstance(lb, cs.MX):
            _lb = lb
        else:
            if len(lb) != ndof:
                _lb = -inf
                for i in range(1, ndof):
                    _lb = vertcat(_lb, -inf)
            else:
                _lb = lb

        self.joint_acc_ub = _ub
        self.joint_acc_lb = _lb


    def load_from_json(self, analytical_derivatives):

        from os.path import join, dirname, abspath

        robots_dir = join(dirname(dirname(str(abspath(__file__)))), "robotshyu/robots/")

        print("Loading robot params from json ...")
        # with open("./models/robots/" + self.name + ".json", "r") as f:
        with open(robots_dir + self.name + ".json", "r") as f:
            json_dict = json.load(f)

        self.ndof = int(json_dict["n_dof"])
        self.nq = int(json_dict["n_q"])
        self.gravity = vertcat(
            float(json_dict["gravity"]["x"]),
            float(json_dict["gravity"]["y"]),
            float(json_dict["gravity"]["z"]),
        )

        _joints_name = list()
        _joints_pos_ub = vertcat()
        _joints_pos_lb = vertcat()
        _joints_vel_ub = vertcat()
        _joints_vel_lb = vertcat()
        _joints_acc_ub = vertcat()
        _joints_acc_lb = vertcat()
        _joints_torque_ub = vertcat()
        _joints_torque_lb = vertcat()
        _all_joint_pos_ub = True
        _all_joint_pos_lb = True
        _all_joint_vel_limit = True
        _all_joint_torque_limit = True
        _all_joint_acc_limit = True

        for x in json_dict["joints"]:
            _joints_name.append(x)

            if ("joint_pos_ub" in json_dict["joints"][x]) and _all_joint_pos_ub:
                _joints_pos_ub = vertcat(
                    _joints_pos_ub, float(json_dict["joints"][x]["joint_pos_ub"])
                )
            else:
                _all_joint_pos_ub = False
            if ("joint_pos_lb" in json_dict["joints"][x]) and _all_joint_pos_lb:
                _joints_pos_lb = vertcat(
                    _joints_pos_lb, float(json_dict["joints"][x]["joint_pos_lb"])
                )
            else:
                _all_joint_pos_lb = False
            if ("joint_vel_limit" in json_dict["joints"][x]) and _all_joint_vel_limit:
                _joints_vel_ub = vertcat(
                    _joints_vel_ub, float(json_dict["joints"][x]["joint_vel_limit"])
                )
                _joints_vel_lb = vertcat(
                    _joints_vel_lb, -float(json_dict["joints"][x]["joint_vel_limit"])
                )
            else:
                _all_joint_vel_limit = False
            if (
                "joint_torque_limit" in json_dict["joints"][x]
            ) and _all_joint_torque_limit:
                _joints_torque_ub = vertcat(
                    _joints_torque_ub,
                    float(json_dict["joints"][x]["joint_torque_limit"]),
                )
                _joints_torque_lb = vertcat(
                    _joints_torque_lb,
                    -float(json_dict["joints"][x]["joint_torque_limit"]),
                )

            else:
                _all_joint_torque_limit = False
            if ("joint_acc_limit" in json_dict["joints"][x]) and _all_joint_acc_limit:
                _joints_acc_ub = vertcat(
                    _joints_acc_ub, float(json_dict["joints"][x]["joint_acc_limit"])
                )
                _joints_acc_lb = vertcat(
                    _joints_acc_lb, -float(json_dict["joints"][x]["joint_acc_limit"])
                )
            else:
                _all_joint_acc_limit = False

        self.joint_name = _joints_name
        if _all_joint_pos_ub:
            self.joint_ub = _joints_pos_ub
        if _all_joint_pos_lb:
            self.joint_lb = _joints_pos_lb
        if _all_joint_vel_limit:
            self.joint_vel_ub = _joints_vel_ub
            self.joint_vel_lb = _joints_vel_lb
        if _all_joint_torque_limit:
            self.joint_torque_ub = _joints_torque_ub
            self.joint_torque_lb = _joints_torque_lb
        if _all_joint_acc_limit:
            self.joint_acc_ub = _joints_acc_ub
            self.joint_acc_lb = _joints_acc_lb
        # TODO: Set ub or lb to infinity if they are not included in json
        # arg: q, qdot, tau
        self.fd = Function.load(robots_dir + str(json_dict["forward_dynamics_path"]))
        # arg: q, qdot, qddot
        self.id = Function.load(robots_dir + str(json_dict["inverse_dynamics_path"]))
        # arg: q
        self.fk = Function.load(robots_dir + str(json_dict["forward_kinematics_path"]))

        self.J_fd = Function.load(robots_dir + str(json_dict["Jacobian_forward_dynamics_path"]))
        self.J_id = Function.load(robots_dir + str(json_dict["Jacobian_inverse_dynamics_path"]))

        if 'Jacobian_space_path' in json_dict:
            # arg: q
            self.J_s = Function.load(robots_dir + str(json_dict['Jacobian_space_path']))
        if 'Jacobian_body_path' in json_dict:
            # arg: q
            self.J_b = Function.load(robots_dir + str(json_dict['Jacobian_body_path']))
            
        if 'mass_matrix_path' in json_dict:
            # arg: q
            self.M = Function.load(robots_dir + str(json_dict['mass_matrix_path']))
        if 'mass_inverse_matrix_path' in json_dict:
            # arg: q
            self.Minv = Function.load(robots_dir + str(json_dict['mass_inverse_matrix_path']))
        if 'coriolis_path' in json_dict:
            # arg: q,qdot
            self.C = Function.load(robots_dir + str(json_dict['coriolis_path']))
        if 'gravity_path' in json_dict:
            # arg: q
            self.G = Function.load(robots_dir + str(json_dict['gravity_path']))

        #####################################################################################
        # rename the jacobians due to casadi's assert of J_fd.name() == jac_+function.name()
        in_J_fd = self.J_fd.sx_in()
        out_J_fd = [
            self.J_fd(self.J_fd.sx_in(0), self.J_fd.sx_in(1), self.J_fd.sx_in(2))
        ]
        self.J_fd = Function("jac_fd", in_J_fd, out_J_fd, ["q", "q_dot", "tau"], ["jac_fd"])

        in_J_id = self.J_id.sx_in()
        out_J_id = [
            self.J_id(self.J_id.sx_in(0), self.J_id.sx_in(1), self.J_id.sx_in(2))
        ]
        self.J_id = Function("jac_id", in_J_id, out_J_id, ["q", "q_dot", "q_ddot"], ["jac_id"])
        ####################################################################################

        if analytical_derivatives:
            fd_opts = {"custom_jacobian": self.J_fd, "jac_penalty": 0}
            id_opts = {"custom_jacobian": self.J_id, "jac_penalty": 0}

            # TODO: Check if there's a better/compact way to keep same inputs of fd for the "new" function fd
            # q_k, dq_k, ddq_k, tau_k = (
            #     cs.SX.sym("q", self.nq, 1),
            #     cs.SX.sym("dq", self.ndof, 1),
            #     cs.SX.sym("ddq", self.ndof, 1),
            #     cs.SX.sym("tau", self.ndof, 1),
            # )
            # self.fd = Function(
            #     "fd", [q_k, dq_k, tau_k], [self.fd(q_k, dq_k, tau_k)], fd_opts
            # )
            # self.id = Function(
            #     "id", [q_k, dq_k, ddq_k], [self.id(q_k, dq_k, ddq_k)], id_opts
            # )

            in_fd = self.fd.sx_in()
            out_fd = [self.fd(self.fd.sx_in(0), self.fd.sx_in(1), self.fd.sx_in(2))]
            self.fd = Function("fd", in_fd, out_fd, ["q", "q_dot", "tau"], ["q_ddot"], fd_opts)

            in_id = self.id.sx_in()
            out_id = [self.id(self.id.sx_in(0), self.id.sx_in(1), self.id.sx_in(2))]
            self.id = Function("id", in_id, out_id, ["q", "q_dot", "q_ddot"], ["tau"], id_opts)

        # if self.scqp:

        #     q_mx, dq_mx, ddq_mx, tau_mx = cs.MX.sym('q',self.ndof), cs.MX.sym('dq',self.ndof), cs.MX.sym('ddq',self.ndof), cs.MX.sym('tau',self.ndof)
            
        #     # Overwrite functions applying symlin to the output
        #     in_fd = [q_mx, dq_mx, tau_mx]
        #     out_fd = [symlin(self.fd(*in_fd))]
        #     self.fd = Function(self.fd.name(), in_fd, out_fd, self.fd.name_in(), self.fd.name_out())

        #     # Overwrite functions applying symlin to the output
        #     in_id = [q_mx, dq_mx, ddq_mx]
        #     out_id = [symlin(self.id(*in_id))]
        #     self.id = Function(self.id.name(), in_id, out_id, self.id.name_in(), self.id.name_out())
            
        # TODO: Add URDF path from json
        if 'urdf_path' in json_dict:
            self.urdf_path = robots_dir + str(json_dict["urdf_path"])
        if 'urdf_frame_path' in json_dict:
            self.urdf_frame_path = robots_dir + str(json_dict["urdf_frame_path"])

        # for distro in json_dict:
        #     print(distro['name'])
        # for x in json_dict:
        #     # print("%s: %s" % (x, json_dict[x]))
        #     print("%s: %s" % (x, json_dict[x]))
        print("Loaded " + str(self.ndof) + "-DoF robot: " + self.name)


    def set_state(self, current_x):
        self.current_state = current_x

    def generate_random_configuration(self):
        """Returns a random configuration of the robot that respects the joint
        limits."""

        n = self.ndof
        joint_ub = np.array(self.joint_ub).T
        joint_lb = np.array(self.joint_lb).T

        joint_ub[joint_ub == inf] = np.pi
        joint_ub[joint_ub == -inf] = -np.pi
        joint_lb[joint_lb == inf] = np.pi
        joint_lb[joint_lb == -inf] = -np.pi

        rand_joint_val = np.random.rand(n) * (joint_ub - joint_lb) + joint_lb

        return list(rand_joint_val[0])

    @property
    def get_initial_conditions(self):
        return self.current_state
