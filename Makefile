CFLAGS=-Wall -g


test: main.o pilha_EC.o
	cc -o test main.o pilha_EC.o
main.o: main.c pilha_EC.o

pilha_EC.o: pilha_EC.c pilha_EC.h

clean: 
	rm -f main.o pilha_EC.o test
