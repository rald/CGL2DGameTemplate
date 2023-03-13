game: game.c
	gcc game.c -o game -I. -I /usr/X11R6/include -L. -L /usr/X11R6/lib -lgl2d -lglfw -lGL -lGLU -lX11 -lXrandr -pthread -lm

libgl2d.a:
	gcc -I /usr/X11R6/include -c gl2d.c
	ar rcs libgl2d.a gl2d.o


clean:
	rm game
