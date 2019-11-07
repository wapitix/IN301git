#include "tableau.h"
#include <string.h>

//associe à chaque caractere un indice dans le tableau des frequences
//les caractes possible sont les caracteres alphabetiques en minuscules et le caractere de fin de chaine '\0'
int indice(char c){
  if(c=='\0') return 0;
  return c-'a' +1;

}


//tri le tableau  selon la composante i
void tri_base_indice(Tableau t, int i){
  //faire un tableau de 26 entiers qui contient qhe des 0
  int *frequences=calloc(sizeof(int),27);
  for(int j=0;j<t.n;j++){ //calcul frequences lettres qui apparait en position i dans les mots de t
    frequences[indice(t.tab[j][i])]++;
  }
  int *frequencesCumulees=calloc(sizeof(int),27);
  for(int j=0;j<27;j++){ //calcul des frequences cumulees
    frequencesCumulees[j] = frequencesCumulees[j-1] + frequences[j-1];
  }
  Tableau temp= copy_tab(t);
  for(int j=0;j<t.n;j++){
    temp.tab[frequencesCumulees[indice(t.tab[j][i])]] = t.tab[j];
    frequencesCumulees[indice(t.tab[j][i])]++;
  }
  for(int j=0;j<t.n;j++){ //recopie le temp dans le tab
    t.tab[j]=temp.tab[j];
  }

  libere_tab(temp);
  free(frequences);
  free(frequencesCumulees);
}


//tri par base
void tri_base(Tableau t){
  int i;
  for(i=t.taille-1; i>=0; i--)
    tri_base_indice(t, i);
}





//partitionne le tableau entre les e=deux indices d et g
int partition(Tableau t, int g, int d){
  int i,j;
  char *temp;
  char *temp2;
  i=g+1;
  j=d;
  while(i<j){
    while(strcmp(t.tab[i],t.tab[g])<=0 && i<=d){
      i++;
    }
    while(strcmp(t.tab[j],t.tab[g])>0 && j>g){
      j--;
    }
    if(i<j){
      temp=t.tab[i];
      t.tab[i]=t.tab[j];
      t.tab[j]=temp;
      i++; j--;
    }
  }
  temp2=t.tab[g];
  t.tab[g]=t.tab[j];
  t.tab[j]=temp2;
  return j;
}


//tri le tableau entre indices g et d compris
void tri_rapide(Tableau t, int g, int d){
  int p; //pivot
  if(g<d){
    p=partition(t,g,d);
    tri_rapide(t,g,p-1);
    tri_rapide(t,p+1,d);
  }
}


//tri par comparaison en utilisant la fonction strcmp
void tri_cmp(Tableau t){
  tri_rapide(t, 0, t.n-1);
}
