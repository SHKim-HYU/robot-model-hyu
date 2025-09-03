gcc -fPIC -shared -O3 kuka_kr_250_rail_C.c -o kuka_kr_250_rail_C.so -lm
gcc -fPIC -shared -O3 kuka_kr_250_rail_G.c -o kuka_kr_250_rail_G.so -lm
gcc -fPIC -shared -O3 kuka_kr_250_rail_M.c -o kuka_kr_250_rail_M.so -lm
gcc -fPIC -shared -O3 kuka_kr_250_rail_Minv.c -o kuka_kr_250_rail_Minv.so -lm
gcc -fPIC -shared -O3 kuka_kr_250_rail_fd.c -o kuka_kr_250_rail_fd.so -lm
gcc -fPIC -shared -O3 kuka_kr_250_rail_fk.c -o kuka_kr_250_rail_fk.so -lm
gcc -fPIC -shared -O3 kuka_kr_250_rail_fk_ee.c -o kuka_kr_250_rail_fk_ee.so -lm
gcc -fPIC -shared -O3 kuka_kr_250_rail_fkrot_ee.c -o kuka_kr_250_rail_fkrot_ee.so -lm
gcc -fPIC -shared -O3 kuka_kr_250_rail_id.c -o kuka_kr_250_rail_id.so -lm
gcc -fPIC -shared -O3 kuka_kr_250_rail_J_s.c -o kuka_kr_250_rail_J_s.so -lm
gcc -fPIC -shared -O3 kuka_kr_250_rail_J_b.c -o kuka_kr_250_rail_J_b.so -lm
gcc -fPIC -shared -O3 kuka_kr_250_rail_dJ_s.c -o kuka_kr_250_rail_dJ_s.so -lm
gcc -fPIC -shared -O3 kuka_kr_250_rail_dJ_b.c -o kuka_kr_250_rail_dJ_b.so -lm

mv ./*.so ../

