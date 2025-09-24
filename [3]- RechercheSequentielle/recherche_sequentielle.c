#include <stdio.h>

int recherche_sequentielle(int T[], int n, int x) {
    for (int i = 0; i < n; i++) {
        printf("Étape %d : comparaison de %d avec %d\n", i+1, T[i], x);
        
        if (T[i] == x) {
            printf("=> Élément trouvé à l'indice %d\n", i);
            return i;  // élément trouvé
        }
    }
    printf("=> Élément non trouvé dans le tableau\n");
    return -1;  // élément absent
}

int main() {
    int T[] = {4, 7, 9, 2, 5, 8};
    int n = sizeof(T) / sizeof(T[0]);
    int x;

    printf("Tableau : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    printf("Entrez l'élément à rechercher : ");
    scanf("%d", &x);

    recherche_sequentielle(T, n, x);

    return 0;
}
