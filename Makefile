CFLAGS=-Wall -g


test: main.o fila_EE.o
	cc -o test main.o fila_EE.o
main.o: main.c fila_EE.o

fila_EE.o: fila_EE.c fila_EE.h

clean: 
	rm -f main.o fila_EE.o test
