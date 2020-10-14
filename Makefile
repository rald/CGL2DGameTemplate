CC=gcc
CFLAGS=-Wall -g
LFLAGS=-lgl2d -lglfw -lXrandr -lX11 -lGL -lGLU -lpthread -lm
INCDIR=-I.
LIBDIR=-L.
OBJS=main.o

game: $(OBJS)
	$(CC) -o game $(OBJS) $(LIBDIR) $(LFLAGS)

main.o: main.c
	$(CC) -c main.c -o main.o $(INCDIR) $(CFLAGS)


.PHONY: clean

clean:
	rm $(OBJS) game
