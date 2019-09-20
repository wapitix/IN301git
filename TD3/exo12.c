#include <stdlib.h>
#include <stdio.h>

int main(){

int T[7][3];

printf("valeur de T = %lu\n", sizeof(T));
printf("Adresse de T[0][0] = %d\n", T[0][0]);
//la valeur de T 0 0 n'est pas initialisée d'après le terminal
printf("Adresse de T[0][1] = %d\n", T[0][1]);
//pareil
printf("Adresse de T[0][2] = %d\n", T[0][2]);
//pareil
printf("Adresse de T[1][0] = %d\n", T[1][0]);
//pareil
printf("Adresse de T[1][1] = %d\n", T[1][1]);
//pareil
printf("Adresse de T[6][2] = %d\n", T[6][2]);
return 0;
}
