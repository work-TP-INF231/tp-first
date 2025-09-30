# TP - Structure de données II (INF 231_EC2)

Ce dépôt contient les 9 exercices du premier TP de C.  
Chaque exercice est dans un dossier séparé (`[1]-nomExercice/`, `[2]-nomExercice/`, ..., `[9]-nomExercice/`).  

---

##  Contenu des exercices

1. **Somme de matrices**
2. **Produit de matrices**
3. **Recherche séquentielle dans un tableau**
4. **Multiplication `a × b` (avec uniquement +1, pour `a,b > 0`)**
5. **Tester si un tableau est trié**
6. **Trouver le médian dans un tableau**
7. **Inverser un tableau**
8. **Produit vectoriel**
9. **Produit vecteur × matrice**

---

##  Compilation et exécution

Chaque dossier contient un fichier nomme en fonction du nom de l'exercice.  
Vous pouvez compiler avec **gcc** puis exécuter le programme.  

Commandes (à lancer depuis chaque dossier de chaque execice) :

### Exercice 1 — Somme de matrices
```bash
gcc sommeMatrice.c -o sommeMatrice && ./sommeMatrice

```

### Exercice 2 — Produit de matrices
```bash
gcc gcc produitMatrice.c -o produitMatrice && ./produitMatrice

```

### Exercice 3 — Recherche séquentielle
```bash
gcc recherche_sequentielle.c -o rechercheSequentielle && ./rechercheSequentielle
```

### Exercice 4 — Multiplication avec +1
```bash
gcc  -o exo exo4.c && ./exo
```

### Exercice 5 — Tester si un tableau est trié
```bash
gcc IfArraySort.c -o ifArraySort && ./ifArraySort
```

### Exercice 6 — Médian d’un tableau
```bash
gcc mediane_tableau.c -o medianeTableau && ./medianeTableau
```

### Exercice 7 — Inverser un tableau
```bash
gcc -o exo exo7.c && ./exo
```

### Exercice 8 — Produit vectoriel
```bash
gcc produitVectoriel.c -o produitVectoriel && ./produitVectoriel
```

### Exercice 9 — Produit vecteur × matrice
```bash
gcc produitVecteurMatrice.c -o matrice && ./matrice
```

---

##  Remarques
- Chaque exercice est indépendant.  
- Les exécutables générés sont placés dans le même dossier que les sources.  


---

 Auteur : *Ghislain Ateba Chouacha*  
