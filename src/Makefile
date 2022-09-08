CC = gcc
CFLAGS = -Wall

all: test_numpulate.c libnumpulate.o
	$(CC) $(CFLAGS) -o test $^

libnumpulate.o: numpulate.c numpulate.h
	$(CC) $(CFLAGS) -c numpulate.c -o libnumpulate.o

clean:
	rm libnumpulate.o test