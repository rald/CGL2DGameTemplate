CC=gcc
CFLAGS=-Wall -g
LFLAGS=-lgl2d -lglfw -lXrandr -lX11 -lGL -lGLU -lpthread -lm
INCDIR=-I.
LIBDIR=-L.
OBJS=game.o

game: $(OBJS)
	$(CC) -o game $(OBJS) $(LIBDIR) $(LFLAGS)

game.o: game.c
	$(CC) -c game.c $(INCDIR) $(CFLAGS)

.PHONY: clean

clean:
	rm $(OBJS) game
