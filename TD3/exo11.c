#include <stdio.h>
#include <stdlib.h>

int main(){
printf("\n");
printf("Question a :\n");
printf("char = %lu\n", sizeof(char));
printf("int = %lu\n", sizeof(int));
printf("double = %lu\n", sizeof(double));
printf("char* = %lu\n", sizeof(char*));
printf("void* = %lu\n", sizeof(void*));
printf("int* = %lu\n", sizeof(int*));
printf("double* = %lu\n", sizeof(double*));
printf("int** = %lu\n", sizeof(int**));
printf("int[10] = %lu\n", sizeof(int[10]));
printf("char[7][3] = %lu\n", sizeof(char[7][3]));
printf("int[5] = %lu\n", sizeof(int[5]));


float tab[10];
printf("\n");
printf("Question b:\n");
printf("tab = %lu\n", sizeof(tab));
printf("tab[0 = ]%lu\n", sizeof(tab[0]));
printf("&tab[0] = %lu\n", sizeof(&tab[0]));
printf("*&tab = %lu\n", sizeof(*&tab));
printf("*&tab[0] = %lu\n", sizeof(*&tab[0]));

  return 0;
}
