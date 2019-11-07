#ifndef _TABINT_H
#define _TABINT_H


struct tabint {
    int N;  // Taille du tableau
    int *T; // Pointeur vers le tableau
};
typedef struct tabint TABINT;


TABINT gen_alea_tabint (int N, int K);
TABINT sup_tabint (TABINT A);

void aff_tabint (TABINT A);
void scan_ech_tabint(TABINT A, int fin);
//utiliser ech_tabint avec i < à T.N-1
void ech_tabint (TABINT A, int i);

void fusionner (TABINT A, int deb, int mil, int fin);

int verif_si_tableau_croissant (TABINT A);

#endif
