gcc -fPIC -shared -O3 indy12_v2_sat_C.c -o indy12_v2_sat_C.so -lm
gcc -fPIC -shared -O3 indy12_v2_sat_G.c -o indy12_v2_sat_G.so -lm
gcc -fPIC -shared -O3 indy12_v2_sat_M.c -o indy12_v2_sat_M.so -lm
gcc -fPIC -shared -O3 indy12_v2_sat_Minv.c -o indy12_v2_sat_Minv.so -lm
gcc -fPIC -shared -O3 indy12_v2_sat_fd.c -o indy12_v2_sat_fd.so -lm
gcc -fPIC -shared -O3 indy12_v2_sat_fk.c -o indy12_v2_sat_fk.so -lm
gcc -fPIC -shared -O3 indy12_v2_sat_fk_ee.c -o indy12_v2_sat_fk_ee.so -lm
gcc -fPIC -shared -O3 indy12_v2_sat_fkrot_ee.c -o indy12_v2_sat_fkrot_ee.so -lm
gcc -fPIC -shared -O3 indy12_v2_sat_id.c -o indy12_v2_sat_id.so -lm
gcc -fPIC -shared -O3 indy12_v2_sat_J_s.c -o indy12_v2_sat_J_s.so -lm
gcc -fPIC -shared -O3 indy12_v2_sat_J_b.c -o indy12_v2_sat_J_b.so -lm
gcc -fPIC -shared -O3 indy12_v2_sat_dJ_s.c -o indy12_v2_sat_dJ_s.so -lm
gcc -fPIC -shared -O3 indy12_v2_sat_dJ_b.c -o indy12_v2_sat_dJ_b.so -lm

gcc -fPIC -shared -O3 indy12_v2_sat_CoM_x.c -o indy12_v2_sat_CoM_x.so -lm
gcc -fPIC -shared -O3 indy12_v2_sat_J_com.c -o indy12_v2_sat_J_com.so -lm

mv ./*.so ../

