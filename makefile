CFLAGS = -Wno-implicit-function-declaration

all: app

app: arrayp.o
	gcc $(CFLAGS) arrayp.o -o app

arrayp.o: alloc.c
	gcc $(CFLAGS) -c arrayp.c

clean:
	rm arrayp.o app

