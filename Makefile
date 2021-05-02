game: game.c
	gcc game.c -o game -I. -L. -lgl2d -lglfw -lGL -lGLU -lX11 -lXrandr -lpthread -lm
