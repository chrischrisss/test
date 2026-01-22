CFLAGS = -Wno-implicit-function-declaration

all: app

app: alloc.o
	gcc $(CFLAGS) alloc.o -o app

alloc.o: alloc.c
	gcc $(CFLAGS) -c alloc.c

clean:
	rm alloc.o app

