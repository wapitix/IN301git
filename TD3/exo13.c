#include <stdlib.h>
#include <stdio.h>

int plusun(int a, int *T){
  a = a+1;
  T[0] = T[0]+1;
  return a;
  return T[0];
}

int main(){
  int a;
  int T[10];
  a = 7;
  T[0] = 12;

  printf("a = %d\n", a);
  printf("T[0] = %d\n", T[0]);

  plusun(a,T);

  printf("\n");
  printf("a = %d\n", a);
  printf("T[0] = %d\n", T[0]);

return 0;
}

/*Avant et après l'appel de la fonction plusun, a ne change pas et
reste a 7.
Alors que avant l'appel de la fonction T[0] est égal à 12,
alors que après c'est égal à 13 */
