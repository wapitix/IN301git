#include "constantes.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ecrire(){

  FILE *F;
  F = fopen("NOMFIC","w");
  srand(getpid());
  for(int i=1; i<21; i++){

    fprintf(F,"Nombre %d = %6d \n",i,rand()%MAX); }

  fclose(F);
}

int main(){
  ecrire();
  
  return 0;
}
