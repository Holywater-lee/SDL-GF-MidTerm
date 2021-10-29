clang++ -g -std=c++17 -o a.out *.cpp -I./usr/include/SDL2 -lX11 -L./usr/lib/x86_64-linux-gnu/libSDL2_2.0.so -lSDL2 -lSDL2main -L./usr/lib/x86_64-linux-gnu/libSDL2_image-2.0.so ./usr/lib/x86_64-linux-gnu/libSDL2_image.a -lpng -ljpeg -ltiff -lwebp 
chmod 744 ./a.out
./a.out