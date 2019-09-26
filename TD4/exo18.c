#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int longueur(char* chaine){
  for(int i=0;1;i++){
    if(chaine[i]=='\0') return i;
  }
}

int longueur_recursif(char* chaine){
  if(chaine[0] =='\0'){
    return 0;
  }
  return 1 + longueur_recursif(chaine+1);

}

int comparaison(char* chaine1, char* chaine2){
  for(int i=0;i<longueur(chaine1) && longueur(chaine2);i++){
    if(chaine1[i]<chaine2[i]) return -1;
    if(chaine2[i]<chaine1[i]) return 1;
    if(longueur(chaine1)==longueur(chaine2)) return 0;
    if(longueur(chaine1)<longueur(chaine2)) return -1;
    else return 1;
  }
}

int main(int argc, char** argv){
  for(int i=1;i<argc;i++){
    printf("Chaine de caractère %d = %d caractères\n",i,longueur(argv[i]));
  }
  for(int i=1;i<argc;i++){
    printf("En récursif, char n°%d = %d caractères\n",i,longueur_recursif(argv[i]));
  }

  printf("lalalla %d \n",comparaison(argv[1],argv[2]));

  return 0;
}


//METHODE DU PROF
/*
int length(char *chaine){
  int i;
  for(i=0;chaine[i] !='\0';i++){}
  return i;

}

int rec_lenght(char *chaine){

}

int main(int argc, char** argv){
  printf("Taille du premier en itératif %d\n", length(argv[1]));
  //printf("Taille du premier en récursif %d\n", rec_lenght(argv[1]));
return 0;
}*/
