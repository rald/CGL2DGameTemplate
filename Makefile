game: main.c
	gcc -o game main.c -I. -L. -lgl2d -lglfw -lXrandr -lX11 -lGL -lGLU -lpthread -lm

.PHONY: clean

clean:
	rm game
