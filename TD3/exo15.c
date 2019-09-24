#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int T[11];

void remplirTableau()
{
  //srand(getpid());
  for(int i=0;i<10;i++){
    T[i]= rand()%20;
  }
}

void afficherTableau(){
  printf("\n");
  for(int i=0;i<10;i++){
    printf(" %d\n", T[i]);
  }
  printf("\n");
}

void sommeValeurs(){
  int somme = 0;
  for(int i=0;i<10;i++){
    somme = somme + T[i];
  }
  printf("Somme des valeurs = %d\n", somme);
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


void decalageDroiteTableau(){
  for(int i=10;i>0;i--){
    T[i]=T[i-1];
  }
  T[0]= 0;
  for(int j=0;j<10;j++){
    printf(" %d\n",T[j]);
  }
}

void allocationTableau(){
  T[0]=rand()%10;
  for(int i=1;i<10;i++){
    T[i]=T[i-1]+rand()%10;
  }

  for(int j=0;j<10;j++){
    printf(" %d\n",T[j]);
  }
}



void ajoutValeur(int valeur){
  printf("\nTableau trié avec valeur en plus :\n");
  for(int i=0;i<10;i++){
    T[i]=rand()%20;
  }
  T[10]=valeur;

  for(int j=1;j<11;j++){
    for(int i=0;i<10;i++){
      if(T[i]>T[i+1]){
        int c=T[i];
        T[i]=T[i+1];
        T[i+1]=c;
      }
    }
  }
  int i=0;
  while(i<11){
    printf("%d\n",T[i]);
    i++;
  }
}


PAS FAIT A FAIRE
/*
void inversementTableau(){
  for(int i=0;i<10;i++){
    T[i]=T[i+1];
    for(int j=10;j>0;j--){
      printf(" %d\n",T[j]);
    }
  }
}*/


int main(){
  inversementTableau();
  //tri(); //affichage tableau trié
  //ajoutValeur(10);
  //allocationTableau();
  //remplirTableau();
  //decalageDroiteTableau();
  //afficherTableau();
  //sommeValeurs();
  //valeurMin();

return 0;
}



/*void decalageGaucheTableau(){
  for(int i=0;i<10;i++){
    T[i]=T[i+1];
    printf(" %d\n",T[i]);
  }
}*/ //decalage a gauche


//CODE TRIAGE A BULLE TABLEAU
/*
void tri(){
  for(int i=0;i<10;i++){
    T[i]=rand()%20;
  }

  for(int j=1;j<10;j++){
    for(int i=0;i<9;i++){
      if(T[i]>T[i+1]){
        int c=T[i];
        T[i]=T[i+1];
        T[i+1]=c;
      }
    }
  }
  int i=0;
  while(i<10){
    printf("%d\n",T[i]);
    i++;
  }
}
*/
