


#include <stdio.h>
#include <stdlib.h>

float* remplissage_tableau(int taille) {
    printf("Remplissez le tableau dans l'ordre croissant ou décroissant :\n");
    float* tab = (float*)malloc(taille * sizeof(float));
    
    if(tab == NULL) {
        printf("Erreur d'allocation\n");
        return NULL;
    }
    
    for(int i = 0; i < taille; i++) {
        printf("Entrez l'élément numéro %d : ", i+1);
        scanf("%f", &tab[i]);
    }
    return tab;
}

void calcule_mediane(float* tab, int taille) {
    float médiane;
    
    if(taille % 2 == 1) {
        médiane = tab[(taille)/2 ];
    }
    else {
        médiane = (tab[taille/2 - 1] + tab[taille/2]) / 2;
    }
    printf("La médiane = %f \n", médiane);
}

int main() {
    float* tab;
    int taille;
    
    printf("Entrez la taille de votre tableau : ");
    scanf("%d", &taille);
    
    if(taille <= 0) {
        printf("La taille doit être positive\n");
        return 1;
    }
    
    tab = remplissage_tableau(taille);
    if(tab == NULL) {
        return 1;
    }
    printf("\n");
    calcule_mediane(tab, taille);
    free(tab);
    
    return 0;
}


    