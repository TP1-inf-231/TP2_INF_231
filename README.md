# TP 231 - Listes chaînées en langage C

Ce projet contient 5 programmes en C qui illustrent différentes structures de listes chaînées :  
- Liste simplement chaînée triée  
- Liste doublement chaînée triée  
- Liste doublement chaînée circulaire
-  LISTE SIMPLEMENT CHAINE CIRCULAIRE
-  Liste avec suppression d'occurrences

### _Contenu du dépôt

###  – Liste simplement chaînée triée
- Définit une structure `Cellule` contenant :
  - un entier `v`
  - un pointeur vers la cellule suivante (`suivant`)
- Fonctionnement du programme :
  1. Demande à l’utilisateur combien d’éléments insérer.  
  2. Chaque élément est créé puis inséré dans la **liste dans l’ordre croissant** (insertion triée).  
  3. La liste triée est affichée.  
  4. L’utilisateur saisit un nouvel élément.  
  5. Ce nouvel élément est inséré dans la bonne position.  
  6. La liste finale mise à jour est affichée.  

 Ce fichier illustre les **listes simplement chaînées avec insertion triée et mise à jour dynamique**.  

---

###  – Liste doublement chaînée triée
- Définit une structure `Cellule` contenant :
  - un entier `v`
  - un pointeur `suivant` (vers l’élément suivant)
  - un pointeur `precedent` (vers l’élément précédent)
- Fonctionnement du programme :
  1. Demande le nombre d’éléments à insérer.  
  2. Chaque élément est inséré à sa position correcte dans une **liste doublement chaînée triée**.  
     - Si c’est le premier, il devient la tête de la liste.  
     - Sinon, on parcourt la liste et on met à jour les pointeurs `suivant` et `precedent`.  
  3. Affiche la liste dans l’ordre, du début à la fin.  

 Ce fichier illustre la **liste doublement chaînée triée**, qui facilite la navigation dans les deux sens (avant ↔ arrière).  

---

###  – Liste doublement chaînée circulaire
- Définit une structure `Cellule` contenant :
  - un entier `valeur`
  - un pointeur `suivant`
  - un pointeur `precedent`
- Fonctionnement du programme :
  1. Affiche un titre indiquant la manipulation d’une **liste doublement chaînée circulaire**.  
  2. Demande le nombre d’éléments à insérer.  
  3. Pour chaque élément :  
     - Si c’est le premier, il pointe vers lui-même (la liste devient circulaire).  
     - Sinon, l’élément est ajouté **à la fin**, et les liens circulaires sont mis à jour.  
  4. Affiche tous les éléments de la liste, en s’arrêtant lorsqu’on revient au premier élément.  

 Ce fichier illustre la **liste doublement chaînée circulaire**, utilisée dans les structures cycliques (gestion de tours dans un jeu, files circulaires, etc.).  

---
### -LISTE SIMPLEMENT CHAINE CIRCULAIRE 
---
### - Liste avec suppression d'occurrences
---

##  Compilation

Pour compiler les programmes, utilisez `gcc` :

```bash
gcc 2.c -o prog..
gcc 4.c -o prog...
gcc d2c.c -o prog....

executer le programme comme suit :
./prog..
./prog...
./prog....
```
##-ORGANISATION 

Étudiants en Licence Informatique

TP 231 – Université de Yaoundé I

