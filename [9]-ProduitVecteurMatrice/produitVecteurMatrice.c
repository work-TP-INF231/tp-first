#include <stdio.h>

int main() {
int n, m; // n = taille du vecteur, m = nb colonnes de la matrice
int i, j;
// Saisie des dimensions
printf("Entrez la taille du vecteur : ");
scanf("%d", &n);
printf("Entrez le nombre de colonnes de la matrice : ");
scanf("%d", &m);
int vecteur[n];
int matrice[n][m];
int resultat[m];
// Saisie du vecteur
printf("Entrez les elements du vecteur (%d valeurs) (ex: 1 2):\n", n);
for(i = 0; i < n; i++) {
scanf("%d", &vecteur[i]);
}
// Saisie de la matrice
printf("Entrez les elements de la matrice %d x %d (ex: 1 2 3 4):\n", n, m);
for(i = 0; i < n; i++) {
for(j = 0; j < m; j++) {
scanf("%d", &matrice[i][j]);
}
}
// Initialisation du résultat
for(j = 0; j < m; j++) {
resultat[j] = 0;
}
// Produit vecteur × matrice
for(j = 0; j < m; j++) {
for(i = 0; i < n; i++) {
resultat[j] += vecteur[i] * matrice[i][j];
}
}
// Affichage du résultat
printf("Resultat du produit vecteur × matrice :\n[ ");
for(j = 0; j < m; j++) {
printf("%d ", resultat[j]);
}
printf("]\n");

return 0;
}





















