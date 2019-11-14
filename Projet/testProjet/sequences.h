#include <stdio.h>


struct sequence {
	char data;
	struct sequence *suiv;
};
typedef struct sequence SEQUENCE;


SEQUENCE *createSequence(FILE *f);
void show(SEQUENCE *S);
void elements(SEQUENCE *S);
