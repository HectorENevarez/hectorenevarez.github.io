CC=gcc

threads: main.o
	$(CC) main.o -o threads -lpthread

main.o : main.c
	$(CC) -c main.c

clean :
	rm *.o