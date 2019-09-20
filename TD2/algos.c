#include "constantes.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int T[N];

void lecture(){
  FILE *G;
  G = fopen(NOMFIC,"r");
  for(int i=0;i<N;i++)
  {
    fscanf(G,"%d",&T[i]);
  }
  fclose (G);
}

void ecrire(){
  FILE *F = fopen("nombres-verif.data","w");

  for(int i=0;i<N;i++){
    fprintf(F,"%6d\n",T[i]);
  }
  fclose(F);
}

int recherche(int x){
  for(int i=0;i<N;i++){
    if(T[i]==x){
      return 1;
    }
    return 0;
  }
}

int main(){ /////////////////MAIN///////////////////
  lecture();
  ecrire();
  if(recherche(5211)==1){
    printf("OUIIIII");
  }
  else{printf("NOOONNN");}
  
/*
  int nombreRecherche;
  printf("\nEntrez un nombre à rechercher : \n");
  scanf("%d",&nombreRecherche);

  if(recherche(*nombreRecherche) == 1)
  {
    printf("Oui il existe\n");
  }
  else{
    printf("Non il n'existe pas\n");
  }
*/
return 0;
}
