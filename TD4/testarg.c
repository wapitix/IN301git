#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char** argv){

  double somme = 0;

  for(int i=0;i<argc;i++){
    somme += atof(argv[i]);
  }
  printf("%f\n",somme);
  if(isdigit(somme) ==0){
    printf("%f\n",somme);
  }
  else return 0;
}
