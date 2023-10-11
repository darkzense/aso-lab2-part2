CC= gcc 
ARGS=-O   
proj: proj.o   ../miIncludes/aritReal
	$(CC) -o ../bin/proj $(ARGS) proj.o
 
proj.o: proj.c
	$(CC)  $(ARGS)  -c  proj.c

clean:
	rm   *.o  
