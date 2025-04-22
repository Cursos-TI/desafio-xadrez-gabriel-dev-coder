#include <stdio.h>

int main(){
  
  int torre = 0;
    //move 5 casas a direita
  int bispo = 0;
    //move 5 casas na diagonal a direita
  int rainha = 0;
    //move 8 casas a esquerda
    
    
    
    
    printf("Torre Se Move----------\n\n");
    
      for(torre; torre < 5; torre++){
          printf("Torre Se Move a:");
          printf("Direita\n"); //impime a direção do movimento 
        }
        
    printf("\n");
    printf("Bispo Se Move----------\n\n");
    
      do{
         printf("Bispo Se Move a:");
         printf("Cima,Direita\n");
         bispo++;
        }while (bispo <=4);
    
        
    printf("\n");
    printf("Rainha Se Move----------\n\n");
    
       while(rainha <= 7){
           printf("Rainha Se Move a:");
           printf("Esquerda\n");
           rainha++;
        }
    
    printf("\n");
    printf("Total De Movimentos De Cada Peça----------\n\n");
    
    printf("Torre %d Casas Movidas a Direita,\nBispo %d Casas Movidas a Diagonal Superior a Direita,\nRainha %d Casas Movidas a Esquerda", torre, bispo, rainha);
    
    
}