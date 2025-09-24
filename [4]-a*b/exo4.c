#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;

    printf("Entrez deux entiers positifs :");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Les deux entiers doivent être positifs\n");
        return 1;
    }else{
        printf("Le produit de %d et %d est %d\n", a, b, a * b);
}
    return 0;
}