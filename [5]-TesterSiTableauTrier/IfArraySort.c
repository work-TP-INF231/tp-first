#include<stdio.h>

int main(){
  int n , i , trie = 1;
  printf("Entrer la taille de votre tableau :");
  scanf("%d",&n);
  int tab[n];
  printf("\n");
  printf("Entrer les %d element de votre tableau \n", n);
  
  for(i=0;i<n;i++){
    printf("element %d du tableau :",i+1);
    scanf("%d",&tab[i]);
  
  }
  for(i=0;i<n-1;i++){
    if (tab[i]>tab[i+1]){
      trie=0;
      break;
    }

  }
  printf("\n");
  printf("Visualisation de votre tableau : ");
  printf("\n");
  printf("[");
  for(i=0;i<n;i++){
    printf("%d| ",tab[i ]);
  }
   printf("] ");
   printf("\n");
   printf("\n");


  if(trie==0){
    printf("RESULTATS : \n");
    printf("le tableau ,n'est pas trier \n");
  }else{
    printf("RESULTATS : \n");
    printf("Le tableau est trier \n");
  }
  return 0;

}
