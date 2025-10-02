#include <stdio.h>
#include <stdlib.h>

typedef struct cellule {
    int v;
    struct cellule* suivant;
} Cellule;

int main() {
    Cellule *tete = NULL, *p, *q, *l;
    int n, i, val;

    // 1. Création d'une liste triée
    printf("Entrer le nombre d'elements : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        l = malloc(sizeof(Cellule));
        printf("Entrer l'element %d : ", i + 1);
        scanf("%d", &l->v);
        l->suivant = NULL;

        // insertion triée
        if (tete == NULL || l->v < tete->v) {
            l->suivant = tete;
            tete = l;
        } else {
            p = tete;
            while (p->suivant != NULL && p->suivant->v < l->v)
                p = p->suivant;
            l->suivant = p->suivant;
            p->suivant = l;
        }
    }

    // 2. Affichage
    printf("\nListe triée : ");
    p = tete;
    while (p != NULL) {
        printf("%d ", p->v);
        p = p->suivant;
    }

    // 3. Insertion d’un nouvel élément
    printf("\nEntrer un element a inserer : ");
    scanf("%d", &val);
    l = malloc(sizeof(Cellule));
    l->v = val;
    l->suivant = NULL;

    if (tete == NULL || val < tete->v) {
        l->suivant = tete;
        tete = l;
    } else {
        p = tete;
        while (p->suivant != NULL && p->suivant->v < val)
            p = p->suivant;
        l->suivant = p->suivant;
        p->suivant = l;
    }

    // 4. Affichage final
    printf("Liste apres insertion : ");
    p = tete;
    while (p != NULL) {
        printf("%d ", p->v);
        p = p->suivant;
    }

    return 0;
}