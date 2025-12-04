gcc -fPIC -shared -O3 KARM_EM_C.c -o KARM_EM_C.so -lm
gcc -fPIC -shared -O3 KARM_EM_G.c -o KARM_EM_G.so -lm
gcc -fPIC -shared -O3 KARM_EM_M.c -o KARM_EM_M.so -lm
gcc -fPIC -shared -O3 KARM_EM_Minv.c -o KARM_EM_Minv.so -lm
gcc -fPIC -shared -O3 KARM_EM_fd.c -o KARM_EM_fd.so -lm
gcc -fPIC -shared -O3 KARM_EM_fk.c -o KARM_EM_fk.so -lm
gcc -fPIC -shared -O3 KARM_EM_fk_ee.c -o KARM_EM_fk_ee.so -lm
gcc -fPIC -shared -O3 KARM_EM_fkrot_ee.c -o KARM_EM_fkrot_ee.so -lm
gcc -fPIC -shared -O3 KARM_EM_id.c -o KARM_EM_id.so -lm
gcc -fPIC -shared -O3 KARM_EM_J_fd.c -o KARM_EM_J_fd.so -lm
gcc -fPIC -shared -O3 KARM_EM_J_id.c -o KARM_EM_J_id.so -lm
gcc -fPIC -shared -O3 KARM_EM_J_s.c -o KARM_EM_J_s.so -lm
gcc -fPIC -shared -O3 KARM_EM_J_b.c -o KARM_EM_J_b.so -lm
gcc -fPIC -shared -O3 KARM_EM_dJ_s.c -o KARM_EM_dJ_s.so -lm
gcc -fPIC -shared -O3 KARM_EM_dJ_b.c -o KARM_EM_dJ_b.so -lm

mv ./*.so ../

