#include <stdio.h>
int main(){
  int A[2][2],B[2][2],S[2][2];
  int i,j;
printf("Matrice A (2*2) :  \n");
for(i=0;i<2;i++){
  for(j=0;j<2;j++){
    printf("ligne %d, colonne %d :",i+1 ,j+1);
    scanf("%d",&A[i][j]);
  }
}
printf("\n");

printf("Matrice B (2*2) : \n");
for(i=0;i<2;i++){
  for(j=0;j<2;j++){
    printf("ligne %d, colonne %d :",i+1 ,j+1);
    scanf("%d",&B[i][j]);
    
  }
}
for(i=0;i<2;i++){
  for(j=0;j<2;j++){
    S[i][j]= A[i][j] + B[i][j];
  }
}

printf("\nMatrice A : \n");
for(i=0;i<2;i++){
  for(j=0;j<2;j++){
    printf("%d ",A[i][j]);
  }
  printf("\n");
}
printf("\nMatrice B : \n");
for(i=0;i<2;i++){
  for(j=0;j<2;j++){
    printf("%d ",B[i][j]);
  }
  printf("\n");
}
printf("\n Matrice C(somme de A et B) est : \n");
for(i=0;i<2;i++){
  for(j=0;j<2;j++){
    printf("%d ",S[i][j]);
  }
  printf("\n");
}
  return 0;
}