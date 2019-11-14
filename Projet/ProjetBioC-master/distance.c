#include <stdio.h>
#include <stdlib.h>
#include "distance.h"
#include "sequence.h"
/*
DISTANCE *calcul(DISTANCE *S){




  return(DISTANCE[4][3]);


}*/

int creerTableau(int i, int j){

  int DISTANCE[5][5];

  // A
  DISTANCE[0][0]= 0;
  DISTANCE[0][1]= 2;
  DISTANCE[0][2]= 1;
  DISTANCE[0][3]= 2;
  DISTANCE[0][4]= 0;
  //C
  DISTANCE[1][0]= 2;
  DISTANCE[1][1]= 0;
  DISTANCE[1][2]= 2;
  DISTANCE[1][3]= 1;
  DISTANCE[1][4]= 0;
  //G
  DISTANCE[2][0]= 1;
  DISTANCE[2][1]= 2;
  DISTANCE[2][2]= 0;
  DISTANCE[2][3]= 2;
  DISTANCE[2][4]= 0;
  //T
  DISTANCE[3][0]= 2;
  DISTANCE[3][1]= 1;
  DISTANCE[3][2]= 2;
  DISTANCE[3][3]= 0;
  DISTANCE[3][4]= 0;
  // -
  DISTANCE[4][0]= 0;
  DISTANCE[4][1]= 0;
  DISTANCE[4][2]= 0;
  DISTANCE[4][3]= 0;
  DISTANCE[4][4]= 0;


 return DISTANCE[i][j];
}


/*
DISTANCE *calculDistance(SEQUENCE *S){

  SEQUENCE *taille;
  taille= malloc(sizeof(int));
  if(taille->data == 'A'){
    return printf("###############\n");
  }
  else return 0;

//return S.buffer[1];
}
*/

/*
void calcul(DISTANCE *S){
  //double boucle qui parcours S1 et S2
  //et qui compare les i valeurs

  for(int i= 0; i<buffer[i]){

  }

  if(S->data=='A'){
    printf("###############\n");
  }
  else
  printf("#####ABDHD####\n");
*/
