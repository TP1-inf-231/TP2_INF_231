#include <stdio.h>
#include <stdlib.h>

typedef struct cellule {
    int v;
    struct cellule *suivant;
    struct cellule *precedent;
} Cellule;

int main() {
    Cellule *tete = NULL, *p, *l;
    int n, i, val;

    printf("Entrer le nombre d'elements : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        l = malloc(sizeof(Cellule));
        printf("Entrer l'element %d : ", i + 1);
        scanf("%d", &l->v);
        l->suivant = l->precedent = NULL;

        // insertion triée
        if (tete == NULL ||l->v < tete->v) {
            l->suivant = tete;
            if (tete != NULL) tete->precedent = l;
            tete = l;
        } else {
            p = tete;
            while (p->suivant != NULL && p->suivant->v < l->v)
                p = p->suivant;
            l->suivant = p->suivant;
            if (p->suivant != NULL) p->suivant->precedent = l;
            l->precedent = p;
            p->suivant = l;
        }
    }

    // Affichage
    printf("\nListe doublement chainee : ");
    p = tete;
    while (p != NULL) {
        printf("%d ", p->v);
        p = p->suivant;
    }

    return 0;
}