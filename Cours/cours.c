#include <stdio.h>
#include <stdlib.h>

#PAS COMPLET NI CORRECT#

//implementation PILE
struct pile{
  int val;
  struct pile *suiv;
}

struct mapile{
  int nb;
  struct pile *p;
}

struct creer_piletab(int MAX){
  struct piletab pt;
  pt.nb=0;
  pt.MAX=MAX;
  pt.T=malloc(MAX*sizeof(int));
  if(!pt.tab) exit(1);

  return pt;
}

struct piletab inserer_piletab(struct piletab pt, int val){
  if(pt.nb<pt.MAX){
    pt.T[pt.nb]=val;
    (pt.nb)++;
  }
  return pt;
}

struct piletab{
  int nb;
  int MAX; //Taille du tableau
  int *T; //tableau des elements de la pile T[0]= fond de pile, T[nb-1]=sommet de pile
}

//implémentation d'une file

struct file{
  int val;
  struct file *suiv;
  struct file *pred;
}

struct mafile{
  int nb;
  struct file *deb;
  struct file *fin;
}

struct filetab{
  int nb;
  int MAX;
  int deb;
  int fin;
  int *T;
}

struct filetab creer_filetab(int MAX){
  struct filetab ft;
  ft.nb=0;
  ft.MAX=MAX;
  ft.deb=0;
  ft.fin=0;
  ft.T=malloc(MAX*sizeof(int));
  if(!ft.tab) exit(1);

  return ft;
}

struct filetab enfiler_filetab(struct filetab ft, int val){
  if(ft.nb<ft.MAX){
    ft.T[ft.nb]=val;
    (ft.nb)++;
    fr.fin=(ft.fin+1)%ft.MAX;
  }
  return ft;
}

struct filetab defiler_filetab(struct filetab ft, int val){
  if(ft.nb>0){
    (ft.nb)--;
    fr.deb=(ft.deb+1)%ft.MAX;
  }
  return ft;
}


int main(){

}
