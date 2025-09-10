gcc -fPIC -shared -O3 KARM_EQM_CI_C.c -o KARM_EQM_CI_C.so -lm
gcc -fPIC -shared -O3 KARM_EQM_CI_G.c -o KARM_EQM_CI_G.so -lm
gcc -fPIC -shared -O3 KARM_EQM_CI_M.c -o KARM_EQM_CI_M.so -lm
gcc -fPIC -shared -O3 KARM_EQM_CI_Minv.c -o KARM_EQM_CI_Minv.so -lm
gcc -fPIC -shared -O3 KARM_EQM_CI_fd.c -o KARM_EQM_CI_fd.so -lm
gcc -fPIC -shared -O3 KARM_EQM_CI_fk.c -o KARM_EQM_CI_fk.so -lm
gcc -fPIC -shared -O3 KARM_EQM_CI_fk_ee.c -o KARM_EQM_CI_fk_ee.so -lm
gcc -fPIC -shared -O3 KARM_EQM_CI_fkrot_ee.c -o KARM_EQM_CI_fkrot_ee.so -lm
gcc -fPIC -shared -O3 KARM_EQM_CI_id.c -o KARM_EQM_CI_id.so -lm
gcc -fPIC -shared -O3 KARM_EQM_CI_J_s.c -o KARM_EQM_CI_J_s.so -lm
gcc -fPIC -shared -O3 KARM_EQM_CI_J_b.c -o KARM_EQM_CI_J_b.so -lm
gcc -fPIC -shared -O3 KARM_EQM_CI_dJ_s.c -o KARM_EQM_CI_dJ_s.so -lm
gcc -fPIC -shared -O3 KARM_EQM_CI_dJ_b.c -o KARM_EQM_CI_dJ_b.so -lm

mv ./*.so ../

