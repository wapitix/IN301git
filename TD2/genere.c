#include <stdio.h>
#include <stdlib.h>
#include "constantes.h"
#include <unistd.h>

void ecrire(){
  FILE *F = fopen(NOMFIC,"w");

  for(int i=1;i<N+1;i++){
    fprintf(F,"%6d\n",rand()%MAX);
  }
  fclose(F);
}

int main(){
  ecrire();

return 0;
}
