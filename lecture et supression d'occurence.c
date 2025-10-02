#include <stdio.h>
#include <stdlib.h>

struct cellule {
    int v;              // La valeur du nœud
    struct cellule *suivant;     // Le lien vers le suivant
};

int main() {
    struct cellule *tete = NULL, *p, *l;
    int n, i, valeur, x;

    // 1️⃣ Créer la liste
    printf("Combien d'elements veux-tu mettre dans la liste ? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Entre la valeur %d : ", i + 1);
        scanf("%d", &valeur);

        // Créer un nouveau nœud
        l = (struct cellule*) malloc(sizeof(struct cellule));
        l->v = valeur;
        l->suivant = NULL;

        // L’ajouter à la fin
        if (tete == NULL) {         // si la liste est vide
            tete = l;
        } else {
            p = tete;
            while (p->suivant!= NULL) {
                p = p->suivant;
            }
            p->suivant = l;
        }
    }

    // 2️⃣ Afficher la liste initiale
    printf("\nListe initiale : ");
    p = tete;
    while (p != NULL) {
        printf("%d -> ", p->v);
        p = p->suivant;
    }
    printf("NULL\n");

    // 3️⃣ Lire la valeur à supprimer
    printf("\nEntre la valeur a supprimer : ");
    scanf("%d", &x);

    // 4️⃣ Supprimer toutes les occurrences de x
    // Cas où la tête contient la valeur
    while (tete != NULL && tete->v == x) {
        p = tete;
        tete = tete->suivant;
        free(p);
    }

    // Cas pour les autres nœuds
    struct cellule *prec = tete;
    if (prec != NULL) {
        p = tete->suivant;
        while (p != NULL) {
            if (p->v == x) {
                prec->suivant = p->suivant;
                free(p);
                p = prec->suivant;
            } else {
                prec = p;
                p = p->suivant;
            }
        }
    }

    // 5️⃣ Afficher la liste après suppression
    printf("\nListe apres suppression de %d : ", x);
    p = tete;
    while (p != NULL) {
        printf("%d -> ", p->v);
        p = p->suivant;
    }
    printf("NULL\n");

    return 0;
}
