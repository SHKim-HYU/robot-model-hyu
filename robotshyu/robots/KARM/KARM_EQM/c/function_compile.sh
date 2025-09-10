gcc -fPIC -shared -O3 KARM_EQM_C.c -o KARM_EQM_C.so -lm
gcc -fPIC -shared -O3 KARM_EQM_G.c -o KARM_EQM_G.so -lm
gcc -fPIC -shared -O3 KARM_EQM_M.c -o KARM_EQM_M.so -lm
gcc -fPIC -shared -O3 KARM_EQM_Minv.c -o KARM_EQM_Minv.so -lm
gcc -fPIC -shared -O3 KARM_EQM_fd.c -o KARM_EQM_fd.so -lm
gcc -fPIC -shared -O3 KARM_EQM_fk.c -o KARM_EQM_fk.so -lm
gcc -fPIC -shared -O3 KARM_EQM_fk_ee.c -o KARM_EQM_fk_ee.so -lm
gcc -fPIC -shared -O3 KARM_EQM_fkrot_ee.c -o KARM_EQM_fkrot_ee.so -lm
gcc -fPIC -shared -O3 KARM_EQM_id.c -o KARM_EQM_id.so -lm
gcc -fPIC -shared -O3 KARM_EQM_J_s.c -o KARM_EQM_J_s.so -lm
gcc -fPIC -shared -O3 KARM_EQM_J_b.c -o KARM_EQM_J_b.so -lm
gcc -fPIC -shared -O3 KARM_EQM_dJ_s.c -o KARM_EQM_dJ_s.so -lm
gcc -fPIC -shared -O3 KARM_EQM_dJ_b.c -o KARM_EQM_dJ_b.so -lm

mv ./*.so ../

