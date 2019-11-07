#ifndef _STAT_H
#define _STAT_H

int comp;
int ech;

struct stat {
	float nb_moy_comp;
	float nb_moy_ech;
};

typedef struct stat * STAT;

// Variables globales pour les stats
unsigned long long int NBCOMP;
unsigned long long int NBECH;

#endif
