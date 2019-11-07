run: compile
	./compile

compile: liste.o test.o
	gcc -Wall test.o liste.o -o compile

liste.o: liste.c liste.h
	gcc -Wall -c liste.c

test.o: test.c
	gcc -Wall -c test.c

clean:
	rm-f *.o
	rm -f liste
