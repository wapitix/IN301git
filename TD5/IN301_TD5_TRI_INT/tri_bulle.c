
#include "tabint.h"
#include "stat.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void tri_bulle_tabint(TABINT A){
	for(int i=0;i<A.N;i++){
		scan_ech_tabint(A,A.N-1);
	}
}

//struct pr derniere question
struct stat stat_moy(int N, int R){
	TABINT A;
	ech =0;
	comp=0;
	srand(time(NULL));
	for(int i=0;i<R;i++){
		A=gen_alea_tabint(N,N);
		tri_bulle_tabint(A);
	}
	
	struct stat s;
	s.nb_moy_comp=(float)comp/R;
	s.nb_moy_ech=(float)ech/R;

return s;
}
/*
void genere_stat(){
	struct stats s;
	FILE * F= fopen("test_tri_bulle.data","w");
	for(int i=10; i<1000;i*=1.2){
		s=stat_moy(i,1000);
		fprintf(F"%d\n");
	}
}*/

int main() {

	TABINT A = gen_alea_tabint(20,100);
	aff_tabint(A);
	tri_bulle_tabint(A);
	aff_tabint(A);
	sup_tabint(A);
	printf("Nombre d'échanges=%d et comparaisons=%d\n",ech,comp);

//les deux trucs du dessous sont pour les questions du bas
/*struct stat s= stat_moy(1000,1000);
 printf("%f et %f",s.nb_moy_ech, s.nb_moy_comp);*/

//genere_stat();

	// Le code ci-dessous est provisoire, juste pour faire marche l'enchainement du Makefile
	FILE *F;
	F = fopen("test_tri_bulle.data","w");
	fprintf(F,"   10           45.00           21.97\n");
 	fprintf(F,"   12           66.00           33.08\n");
 	fprintf(F,"   14           91.00           46.35\n");
 	fprintf(F,"   16          120.00           61.08\n");
 	fprintf(F,"   19          171.00           85.71\n");
 	fprintf(F,"   22          231.00          115.62\n");
 	fprintf(F,"   26          325.00          162.21\n");
	fclose(F);
	// Fin du code provisoire
	exit(0);
}
