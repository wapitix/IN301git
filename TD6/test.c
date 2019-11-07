#include "liste.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

  struct liste *l=NULL;//creer liste de base quiest vide
  struct liste*l1= malloc(sizeof(struct liste));
  //on malloc pour que la fonction existe aussi hors du main
  //c est pour la question b, apres on va definir sa valeur
  l1->val= 17;
  l1->suiv= NULL;
  //l1->val <=> (*l1).val
  l=l1;//la liste qu'on modifie au fur et a mesure est l

  struct liste *l2 = malloc(sizeof(struct liste));
  //on re malloc pour la deuxieme valeur
  l2->val=23;
  l2->suiv=l1;
  l=l2;

  struct liste*l3= malloc(sizeof(struct liste));
  l3->val=42;
  l3->suiv=l1; //l3 est le suivant de l1 dans la liste
  l2->suiv=l3; //l2 est le suivant de l3


  /*
  l=inserer_deb(l,5);
  affiche_iter(l);*/

  affiche_iter(l);
  retourner(l);
  affiche_iter(l);

  /*  exo26
  affiche_rec(l);
  printf("\n");
  printf("Taille iter = %d\n",nb_elem_iter(l));
  printf("Taille rec = %d\n",nb_elem_rec(l));

  //renvoi 1 si le val est dans la liste, 0 sinon
  printf("Est présent iter = %d\n",est_present_iter(l,17));
  printf("Est présent rec = %d\n",est_present_iter(l,17));
*/
  return 0;
}
