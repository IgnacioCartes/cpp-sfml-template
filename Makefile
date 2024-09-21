sfml = "C:\Projects\libraries\SFML-2.6.1_32-bit"

all:
	compile link clean

compile:
	g++ -I${sfml}/include -c src/main.cpp -o build/main.o -DSFML_STATIC

link:
	g++ build/main.o -o build/main -L${sfml}/lib -lsfml-graphics-s -lsfml-window-s -lsfml-system-s -lopengl32 -lfreetype -lwinmm -lgdi32 -mwindows -lsfml-main

clean:
	rm -f build/*.o