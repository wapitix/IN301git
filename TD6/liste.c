#include "liste.h"
#include <stdlib.h>
#include <stdio.h>

//EXO 26
void affiche_iter(struct liste*l){

  while(l!=NULL){
    printf("%d ",l->val);
    l=l->suiv;
  }
  printf("\n");
}

void affiche_rec(struct liste*l){
  if(l!=NULL){
    printf("%d ",l->val);
    affiche_rec(l->suiv);
  }
  else printf("\n");
}

int nb_elem_iter(struct liste *l){
  int taille=0;
  while(l!=NULL){
    l=l->suiv;
    taille++;
  }
  return taille;
}

int nb_elem_rec(struct liste *l){
  if(l!=NULL){
    return 1 + nb_elem_rec(l->suiv);
  }
  return 0;
}

int est_present_iter(struct liste *l, int val){
  while(l!=NULL){
    if(l->val==val) return 1;
    l=l->suiv;
  }

  return 0;
}

int est_present_rec(struct liste *l, int val){
  if(!l){
    if(l->val==val) return 1;
    return 0;
  }
  return 0;
}

//EXO27   IMPORTANT
struct liste *inserer_deb(struct liste *l, int val){
  struct liste *chat = malloc(sizeof(struct liste));
  chat->val=val;
  chat->suiv=l;
  return chat;
}

struct liste *supprimer_deb(struct liste *l){
  if(l==NULL){
    printf("Liste vide");
    exit(1);
  }
  else{
    struct liste *chat=l;
    l=l->suiv;
    free(chat);
    return l;
  }
}

struct liste *inserer_fin_iter(struct liste *l,int val){
  struct liste *nombre=malloc(sizeof(struct liste));
  nombre->val=val;
  nombre->suiv=NULL;
  if(!l){
    return nombre;
  }
  struct liste *temp=l;
  while(temp->suiv) temp=temp->suiv;

  temp->suiv=nombre;
  return l;
}

struct liste *inserer_fin_rec(struct liste *l, int val){
  //struct liste *valeur=malloc(sizeof(struct liste));
  //struct liste *temp=l;
  if(!l){
    return (inserer_deb(l,val));
    /*inserer au debut ou a la fin c est la meme chose donc on fait appel
     a la fonction inserer*/
  }
  l->suiv= inserer_fin_rec(l->suiv,val);
  //l->suiv sera egal au premier element
  return l;
}

struct liste *supprimer_fin_iter(struct liste *l){
  if(!l){
    printf("Impossible de supprimer un élément d'une liste vide\n");
    exit(1);
  }
  if(!l->suiv){
    free(l);
    return NULL;
  }
  struct liste *temp=l;
  while(temp->suiv->suiv){
    temp=temp->suiv;
  }
  free(temp->suiv);
  temp->suiv=NULL;
  return l;
}

struct liste *supprimer_fin_rec(struct liste *l){
  if(!l) return NULL;
  if(!l->suiv){
    free(l);
    return NULL;
  }
  l->suiv=supprimer_fin_rec(l->suiv);
  return l;
}

//const dans parenthese
struct liste *supprimer_mil_iter(struct liste *l, int val){
  if(!l) return NULL;
  if(l->val ==val){
    struct liste *temp = l->suiv;
    free(l);
    return temp;
  }
  struct liste *temp=l;
  while(temp->suiv && (temp->suiv->val !=val)){
    temp=temp->suiv;
  }
  //ca s arrete qd on pointe soit sur un element precedent un element de valeur val
  // soit sur le dernier element si il n y a pas d elements de valeur val
  if(!temp->suiv) return l; //on fait rien si on trouve pas de valeur egale a val
  struct liste *add_sup=temp->suiv;
  temp->suiv = (temp->suiv)->suiv;
  free(add_sup);
  return l;
}


struct liste *supprimer_mil_rec(struct liste *l, int val){
  if(!l) return NULL;
  if(l->val == val) {
    return supprimer_deb(l);
  }
  l->suiv=supprimer_mil_rec(l->suiv,val);
  return l;
}

struct liste *inserer_trie_rec(struct liste *l, int val){
  if(!l || l->val >= val) return inserer_deb(l,val);
  l->suiv = inserer_trie_rec(l->suiv,val);
  return l;
}


//probleme de triage
struct liste *inserer_trie_iter(struct liste *l, int val){
  struct liste *temp = l;
  if(!l || l->val >=val) return inserer_deb(l,val);
  while(temp->suiv && temp->val <=val){
    temp=temp->suiv;
  }
  temp->suiv = inserer_deb(temp->suiv,val);
  return l;
}


struct liste *retourner(struct liste *l){
  if(!l || !l->suiv) return l;
  struct liste *temp=l->suiv;
  struct liste *res = retourner(l->suiv);
  temp->suiv = l;
  l->suiv=NULL;
  return res;
}











//s
