#!/usr/bin/env python3

import os
from tasho import world_simulator
import pybullet as p

obj = world_simulator.world_simulator(bullet_gui=True)
script_dir=os.path.dirname(__file__)
    ####################
    # cub_path=os.path.join(script_dir,"/home/mtplnr/mpc_ws/tasho-mmo500/models/objects/cube_small.urdf")
car_path=os.path.join(script_dir,"/home/mtplnr/mpc_ws/tasho-mmo500/models/objects/cube.urdf")
carID = p.loadURDF(
        car_path,
        [0.0, 0, 0.0],
        [0.0, 0.0, 0.0, 1.0],
        globalScaling=1.0,
        useFixedBase=False
)

while(True)
{

}
