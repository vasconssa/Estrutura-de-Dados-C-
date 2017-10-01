CFLAGS=-Wall -g


test: main.o pilha_EE.o
	cc -o test main.o pilha_EE.o
main.o: main.c pilha_EE.o

pilha_EE.o: pilha_EE.c pilha_EE.h

clean: 
	rm -f main.o pilha_EE.o test
