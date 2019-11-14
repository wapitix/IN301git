#include <stdio.h>
//#include "sequence.h"

struct distance {
  char data;
  int length;
  int value;
  struct sequence *next;
};
typedef struct distance DISTANCE;

//DISTANCE *calculDistance(SEQUENCE *S);
void calcul(DISTANCE *S);
