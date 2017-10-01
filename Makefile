CFLAGS=-Wall -g


test: main.o fila_EC.o
	cc -o test main.o fila_EC.o
main.o: main.c fila_EC.o

fila_EC.o: fila_EC.c fila_EC.h

clean: 
	rm -f main.o fila_EC.o test
