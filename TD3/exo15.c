#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int T[10];

void remplirTableau()
{
  srand(getpid());
  for(int i=0;i<10;i++){
    T[i]= rand()%20;
  }
}

void afficherTableau(){
  printf("\n");
  for(int i=0;i<10;i++){
    printf("%d\n", T[i]);
  }
  printf("\n");
}

void sommeValeurs(){
  int somme = 0;
  for(int i=0;i<10;i++){
    somme = somme + T[i];
  }
  printf("somme = %d\n", somme);
}

void valeurMin(){
  int valMin = T[0];
  for(int i=1;i<10;i++){
    if(T[i]<valMin){
      valMin= T[i];
    }
    else{
      valMin= valMin;
    }
  }
  printf("Valeur Minimum = %d\n", valMin);
}

int main(){
  remplirTableau();
  afficherTableau();
  //sommeValeurs();
  valeurMin();
return 0;
}
