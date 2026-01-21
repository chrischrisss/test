CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o
	gcc $(CFLAGS) main.o -o final

main.o: main.c
	gcc $(CFLAGS) -c main.c

clean:
	rm main.o final

