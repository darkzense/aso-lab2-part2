modules= aritReal.o

all:libreria

aritReal.o: *.c
	gcc -c -Wall *.c

libreria: $(modules)
	ar -cvq libMia.a *.o
clean:
	rm   *.o
	rm   libMia.*


