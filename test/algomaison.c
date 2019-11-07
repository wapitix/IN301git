#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
/*
int calcul(int a, int b){
  int somme =a+b;
  return somme;
}*/

int partition(int* T,int g, int d){
  int i,j,temp,temp2;
  i=g+1;
  j=d;
  while(i<=j){
    while(i<=j && T[i]<=T[g])  i++;
    while(i<=j && T[i]>=T[g]) j--;
    if(i<j){
      temp=T[i];
      T[i]=T[j];
      T[j]=temp;
    }
  }
  temp2=T[g];
  T[g]=T[j];
  T[j]=temp2;
  return j;
  return *T;
}

int triRapide(int* T, int g, int d){
  int p;
  if(g<d){
    T[p]= partition(T,g,d);
    T=triRapide(T,g,p-1);
    T=triRapide(T,p+1,d);
  }
  return T;
}



int* remplir(){
  int i;
  int* T=malloc(20*sizeof(int));
  for(i=0;i<20;i++){
    T[i]=rand()%10;
  }
  
}

void afficher(int* T){
  for(int i=0;i<20;i++){
    printf("%d ",T[i]);
  }
  printf("\n");

}


int main(){

  int* T=remplir();
  afficher(T);
  triRapide(T,0,19);
  afficher(T);
//printf("%d\n", calcul(4,9));

  return 0;
}
