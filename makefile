compile: main.o sieve.o
	gcc main.o sieve.o -lm

main.o: main.c sieve.h
	gcc -c main.c

sieve.o: sieve.c sieve.h
	gcc -c sieve.c

clean: rm *.o

run:
	./a.out $(args)