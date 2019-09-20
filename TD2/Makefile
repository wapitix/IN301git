run: compile
	./algos
	./genere

compile:  constantes.h algos.c genere.c
	gcc -Wall -o algos algos.c -lpthread
	gcc -Wall -o genere genere.c -lpthread
