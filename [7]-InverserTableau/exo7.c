#include <stdio.h>

int main(){
    int n;
    printf("Entrer la taille du tableau : ");
    scanf("%d", &n);

    int Tab[n], Inv[n];

    printf("Entrer les %d elements du tableau :\n", n);

    for(int i = 0; i < n; i++){
        scanf("%d", &Tab[i]);
    }

    //inversion du tableau
    for(int i = 0; i < n; i++){
        Inv[i] = Tab[n - 1 - i];
    }

    printf("Tableau inverse : ");
    for(int i = 0; i < n; i++){
        printf("%d ", Inv[i]);
    }
    printf("\n");

    return 0;
}