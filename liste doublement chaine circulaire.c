#include <stdio.h>
#include <stdlib.h>

typedef struct Cellule {
    int valeur;
    struct Cellule *precedent;
    struct Cellule *suivant;
} Cellule;

int main() {
    Cellule *liste = NULL;
    Cellule *nouveau, *dernier;
    int valeur, n, i;
    
    printf("=== LISTE DOUBLEMENT CHAÎNÉE CIRCULAIRE ===\n\n");
    
    // Demander le nombre d'éléments
    printf("Combien d'éléments voulez-vous ajouter ? ");
    scanf("%d", &n);
    
    // Ajouter les éléments
    for(i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &valeur);
        
        // Créer le nouvel élément
        nouveau = (Cellule*)malloc(sizeof(Cellule));
        nouveau->valeur = valeur;
        
        if(liste == NULL) {
            // Premier élément - pointe vers lui-même
            nouveau->precedent = nouveau;
            nouveau->suivant = nouveau;
            liste = nouveau;
        } else {
            // Ajouter à la fin
            dernier = liste->precedent;
            
            nouveau->suivant = liste;
            nouveau->precedent = dernier;
            
            dernier->suivant = nouveau;
            liste->precedent = nouveau;
        }
    }
    
    // Afficher la liste
    if(liste == NULL) {
        printf("La liste est vide.\n");
    } else {
        Cellule *courant = liste;
        
        printf("\nListe circulaire : ");
        do {
            printf("%d → ", courant->valeur);
            courant = courant->suivant;
        } while(courant != liste);
        printf("[retour au début]\n");
    }
    
    return 0;
}
