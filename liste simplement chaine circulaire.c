#include <stdio.h>
#include <stdlib.h>

// Structure d'un élément de liste circulaire
typedef struct Cellule {
    int valeur;                 // Donnée de l'élément
    struct Cellule *suivant;    // Pointeur vers l'élément suivant
} Cellule;

// Insertion en tête dans une liste circulaire
Cellule* insererTete(Cellule *tete, int valeur) {
    // Création du nouvel élément
    Cellule *nouveau = (Cellule*)malloc(sizeof(Cellule));
    nouveau->valeur = valeur;   // Initialisation de la valeur
    
    // Cas 1: Liste vide - l'élément pointe vers lui-même
    if (tete == NULL) {
        nouveau->suivant = nouveau;  // Boucle sur lui-même
        return nouveau;              // Retourne le nouvel élément comme tête
    }
    
    // Cas 2: Liste non vide - recherche du dernier élément
    Cellule *dernier = tete;
    // Parcours jusqu'au dernier élément (qui pointe vers la tête)
    while (dernier->suivant != tete) {
        dernier = dernier->suivant;  // Avance dans la liste
    }
    
    // Insertion en tête
    nouveau->suivant = tete;         // Nouveau pointe vers ancienne tête
    dernier->suivant = nouveau;      // Dernier pointe vers nouveau
    return nouveau;                  // Nouveau devient la nouvelle tête
}

// Insertion en queue dans une liste circulaire
Cellule* insererQueue(Cellule *tete, int valeur) {
    // Création du nouvel élément
    Cellule *nouveau = (Cellule*)malloc(sizeof(Cellule));
    nouveau->valeur = valeur;   // Initialisation de la valeur
    
    // Cas 1: Liste vide - l'élément pointe vers lui-même
    if (tete == NULL) {
        nouveau->suivant = nouveau;  // Boucle sur lui-même
        return nouveau;              // Retourne le nouvel élément comme tête
    }
    
    // Cas 2: Liste non vide - recherche du dernier élément
    Cellule *dernier = tete;
    // Parcours jusqu'au dernier élément
    while (dernier->suivant != tete) {
        dernier = dernier->suivant;  // Avance dans la liste
    }
    
    // Insertion en queue
    dernier->suivant = nouveau;      // Ancien dernier pointe vers nouveau
    nouveau->suivant = tete;         // Nouveau pointe vers tête (boucle)
    return tete;                     // La tête ne change pas
}
