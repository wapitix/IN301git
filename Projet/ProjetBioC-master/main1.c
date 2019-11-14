#include <stdio.h>
#include <stdlib.h>
#include "sequence.h"
#include "distance.h"


int main(int argc, char *argv[]) {
	SEQUENCE *S1 = NULL;
	FILE *f1 = NULL;
	f1 = fopen(argv[1], "r");
	S1 = createSequence(f1, S1);
	S1 = reverse(S1);
	show(S1);

	//DISTANCE *S1;
	//S1 =calculDistance(S1);
	//calcul(S1);
	fclose(f1);

	SEQUENCE *S2 = NULL;
	FILE *f2 = NULL;
	f2 = fopen(argv[2], "r");
	S2 = createSequence(f2, S2);
	S2 = reverse(S2);
	show(S2);
	fclose(f2);
	int a=creerTableau(1,2);
	printf("%d\n",a);


	return 0;
}
