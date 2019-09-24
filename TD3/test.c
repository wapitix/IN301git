#include <unistd.h>
#include <stdio.h>
#include <unistd.h>


void sort_c(int array[])
{
    int i = 0;
    int j = 0;
    int tmp = 0;
    for(i=0; i<10 ; i++){
      for(j=i; j<10; j++){
            if(array[j]<array[i]){
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}

int main(){
    int array[] = {12,23, 4, 2};
    int i=0;
    sort_c(array);

    for(i=0; i<4 ; i++){
        printf(" %d\n",array[i]);
    }

    return 0;
}


/*
void tri(int T[]){
  if

}


int main(){

  int T[10];
  for(int i=0;i<10;i++){
    T[i]=rand()%20;
    printf("%d\n",T[i]);
  }



  return 0;
}
*/
