#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    #include <stdio.h>


    int main(){
      
      int torre = 0;
        //move 5 casas a direita
      int bispo = 0;
        //move 5 casas na diagonal a direita
      int rainha = 0;
        //move 8 casas a esquerda
        
        
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.    
    
    printf("Torre Se Move----------\n\n");
        
      for(torre; torre < 5; torre++){
        printf("Torre Se Move a:");
        printf("Direita\n"); //impime a direção do movimento 
      }

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("\n");
    printf("Bispo Se Move----------\n\n");
    
      do{
         printf("Bispo Se Move a:");
         printf("Cima,Direita\n");
         bispo++;
        }while (bispo <=4);
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

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

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
