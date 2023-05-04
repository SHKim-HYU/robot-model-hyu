from robotshyu import Robot as rob

myRobot = rob.Robot('yumi')


q_init = myRobot.generate_random_configuration()

fwd_kin = myRobot.fk

fwd_dyn = myRobot.fd

inv_dyn = myRobot.id

print(fwd_dyn)
