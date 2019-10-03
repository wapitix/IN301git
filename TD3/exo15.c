#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int T[10];

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

void afficherTableauTrie(){
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
  printf("\n");
}

void produitValeurs(){
  int produit = T[0];
  for(int i=1;i<10;i++){
    produit = produit * T[i];
  }
  printf("Produit des valeurs = %d\n", produit);
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
  int i;
  for(i=1;i<10;i++){
    T[i]=T[i-1]+rand()%10;
  }
  int j;
  for(j=0;j<10;j++){
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


void inversementTableau(){
  int i=0, j=9,x;

  while(i<j){
    x=T[j];
    T[j]=T[i];
    T[i]=x;
    i++;
    j--;
  }
  for(i=0; i<10;i++){
    printf("%d\n",T[i]);
  }
}

void suppressionValeur(int v){

}


int main(){
  //Question A
remplirTableau();
  //Question B
afficherTableau();
//afficherTableauTrie();
  //Question C
//produitValeurs();
  //Question D
//valeurMin();
  //Question E
//decalageDroiteTableau();
  //Question F
//allocationTableau();
  //Question G
//ajoutValeur(10);
  //Question H
//inversementTableau();
  //Question I
//suppressionValeur(5);
  //Question J



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
