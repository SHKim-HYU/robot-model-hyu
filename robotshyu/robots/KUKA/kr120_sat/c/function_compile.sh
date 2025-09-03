gcc -fPIC -shared -O3 kuka_kr_120_sat_C.c -o kuka_kr_120_sat_C.so -lm
gcc -fPIC -shared -O3 kuka_kr_120_sat_G.c -o kuka_kr_120_sat_G.so -lm
gcc -fPIC -shared -O3 kuka_kr_120_sat_M.c -o kuka_kr_120_sat_M.so -lm
gcc -fPIC -shared -O3 kuka_kr_120_sat_Minv.c -o kuka_kr_120_sat_Minv.so -lm
gcc -fPIC -shared -O3 kuka_kr_120_sat_fd.c -o kuka_kr_120_sat_fd.so -lm
gcc -fPIC -shared -O3 kuka_kr_120_sat_fk.c -o kuka_kr_120_sat_fk.so -lm
gcc -fPIC -shared -O3 kuka_kr_120_sat_fk_ee.c -o kuka_kr_120_sat_fk_ee.so -lm
gcc -fPIC -shared -O3 kuka_kr_120_sat_fkrot_ee.c -o kuka_kr_120_sat_fkrot_ee.so -lm
gcc -fPIC -shared -O3 kuka_kr_120_sat_id.c -o kuka_kr_120_sat_id.so -lm
gcc -fPIC -shared -O3 kuka_kr_120_sat_J_s.c -o kuka_kr_120_sat_J_s.so -lm
gcc -fPIC -shared -O3 kuka_kr_120_sat_J_b.c -o kuka_kr_120_sat_J_b.so -lm
gcc -fPIC -shared -O3 kuka_kr_120_sat_dJ_s.c -o kuka_kr_120_sat_dJ_s.so -lm
gcc -fPIC -shared -O3 kuka_kr_120_sat_dJ_b.c -o kuka_kr_120_sat_dJ_b.so -lm

mv ./*.so ../

