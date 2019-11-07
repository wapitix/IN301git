#include "tabint.h"
#include "stat.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void tri_fusion_tabint(TABINT A, int deb, int fin){
	if((fin-deb)>1){
    tri_fusion_tabint(A,deb,(fin+deb)/2);
    tri_fusion_tabint(A,(fin+deb)/2,fin);
    fusionner(A,deb,(fin+deb)/2,fin);
  }
}

//struct pr derniere question
struct stat stat_moy(int N, int R){
	TABINT A;
	comp=0;
	for(int i=0;i<R;i++){
		A=gen_alea_tabint(N,N);
		tri_fusion_tabint(A,0,A.N);
    sup_tabint(A);
	}

	struct stat s;
	s.nb_moy_comp=(float)comp/R;


return s;
}

/*
void genere_stat(){
  struct stat;
    FILE *F=fopen("test_tri_fusion.data","w");
    for(int i=0;i<1000;i++){
      s=stat_moy(i,1000);
      fprintf(F,"%d %f \n", i,s.nb_moy_comp); //j ai enlevé un float pour le ech, on peut le remettrepour les questions precedentes
    }
    fclose(F);
}
*/

int main() {
  srand(time(NULL));
	TABINT A = gen_alea_tabint(20,20);
  aff_tabint(A);
  fusionner(A,0,10,20);
  aff_tabint(A);
  tri_fusion_tabint(A,0,A.N);
  aff_tabint(A);

  //genere_stat();

  printf("\n");

//les deux trucs du dessous sont pour les questions du bas
/*struct stat s= stat_moy(1000,1000);
 printf("%f et %f",s.nb_moy_ech, s.nb_moy_comp);*/


	exit(0);
}
