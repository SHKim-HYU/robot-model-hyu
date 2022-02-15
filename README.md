# Robot-models-meco

A repository of robot models built with Pinocchio and CasADi.

## Installation

Execute `pip install git+https://gitlab.kuleuven.be/meco-software/robot-models-meco.git@main`

## Available robots
| Robot | Degrees of freedom | Alias |
|-------|-------------|-------|
| UR10      |     6   |  `ur10`     |
| KUKA KR5      |     6   |  `kr5`     |
| KUKA KR60     |     6   |  `kr60`     |
| Kinova Gen3      |     7   |  `kinova`     |
| KUKA iiwa7      |     7   |  `iiwa7`     |
| KUKA iiwa14      |     7   |  `iiwa14`     |
| Franka Panda (without gripper) |     7   |  `franka_panda`     |
| Franka Panda      |     9   |  `franka_panda_with_gripper`     |
| ABB Yumi      |     18   |  `yumi`     |
| Atlas      |     32   |  `atlas`     |



For every robot in the table, this repository includes functions for:
- Forward dynamics
- Inverse dynamics
- Forward kinematics
- Analytical derivatives of forward dynamics
- Analytical derivatives of inverse dynamics