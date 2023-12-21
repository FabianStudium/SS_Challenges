CC=gcc
CFLAGS=-Wall -g -O0

buffer: buffer.o
	$(CC) $(CFLAGS) -o buffer buffer.o

buffer.o: buffer.c
	$(CC) $(CFLAGS) -c buffer.c

clean:
	rm -f buffer buffer.o
