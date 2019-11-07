struct liste {
  int val; // Valeur stockée
  struct liste *suiv; // Pointeur vers le suivant
};

void affiche_iter(struct liste *l);
void affiche_rec(struct liste *l);

int nb_elem_iter(struct liste *l);
int nb_elem_rec(struct liste *l);

int est_present_iter(struct liste *l, int val);
int est_present_rec(struct liste *l, int val);

struct liste *inserer_deb(struct liste *l, int val);
struct liste *supprimer_deb(struct liste *l);

struct liste *inserer_fin_iter(struct liste *l, int val);
struct liste *supprier_fin_rec(struct liste *l,int val);

struct liste *supprimer_fin_iter(struct liste *l);
struct liste *supprimer_fin_rec(struct liste *l);

struct liste *supprimer_mil_iter(struct liste *l, int val);
struct liste *supprimer_mil_rec(struct liste *l, int val);

struct liste *inserer_trie_rec(struct liste *l, int val);
struct liste *inserer_trie_iter(struct liste *l, int val);

struct liste *retourner(struct liste *l);
