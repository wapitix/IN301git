#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


int main()
{
  srand(getpid());
  int a;
  for(int i=0; i<1000; i++)
  {
    a=rand()%100;
    printf("%d\n",a);
  }
  return 0;
}

/* questions A & B
int main()
{
  srand(getpid());
  int a;
  for(int i=0; i<1000; i++)
  {
    a=rand()%500;
    printf("%d\n",a);
  }
  return 0;
}
*/

/*Pour la redirection on utilise "./exo3 >> nombres.data "
ca va créer un fichier appele nombres.data car il n est pas créé et
ca va mettre les resultats dedans */

/* questions d'après
sort nombres.data - n >> nombres_tries.data

*/
