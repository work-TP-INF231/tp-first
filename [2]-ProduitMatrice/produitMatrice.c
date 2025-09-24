#include <stdio.h>
#define LIGNES 2
#define COLONNES 2
int main () {

    int tab_1[LIGNES][COLONNES];
    int tab_2[LIGNES][COLONNES];
    int tab_3[LIGNES][COLONNES];

    int i, j, k;

    printf("Enter the values of the matrix 1: \n");

    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLONNES; j++) {
            scanf("%d", &tab_1[i][j]);
        }
    }

    for (i = 0; i < LIGNES; i++) {
       for (j = 0; j < COLONNES; j++) {
           printf("The values of matrix 1 are tab[%d][%d] = %d\n ", i, j, tab_1[i][j], "\n");
       }
    }

    printf("\n");

    printf("Enter the values of the matrix 2: \n");

    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLONNES; j++) {
            scanf("%d", &tab_2[i][j]);
        }
    }

    for (i = 0; i < LIGNES; i++) {
        for (j = 0; j < COLONNES; j++) {
            printf("The values of matrix 2 are : tab_2[%d][%d] = %d\n", i, j, tab_2[i][j]);
        }
    }

    for (i = 0; i < LIGNES; i++) {
        for (j = 0; j < COLONNES; j++) {
            tab_3[i][j] = 0;
    }
        }

    //Calcul du produit matriciel

        printf("\n");
        for (i = 0; i < LIGNES; i++) {
            for (j = 0; j < COLONNES; j++) {
                    for (k = 0; k < COLONNES; k++) {
                        tab_3[i][j] += tab_1[i][k] * tab_2[k][j];
        }
           }

                    }
    //Affichage de la matrice
    printf("Resultats of product :");
        printf("\n");
        for (i = 0; i < LIGNES; i++) {
            for (j = 0; j < COLONNES; j++) {
                printf("%d\t", tab_3[i][j]);
}
        printf("\n");

}
}
