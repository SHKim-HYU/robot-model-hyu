from robotsMECO import Robot as rob

myRobot = rob.Robot('kinova')


q_init = myRobot.generate_random_configuration()

fwd_kin = myRobot.fk

fwd_dyn = myRobot.fd

inv_dyn = myRobot.id

print(myRobot.fk(q_init))
