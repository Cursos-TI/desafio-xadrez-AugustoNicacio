#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

// Mover a Torre 5 casas para a direita
for (int i = 0; i < 5; i++) {
    printf("Torre Direita\n"); //Imprime a direção do movimento
}
// Mover o Bispo 5 casas para cima 
for (int i = 0; i < 5; i++) {
    printf("Bispo para cima\n"); //Imprime a direção do movimento
}
    // Mover o Bispo 5 casas para direita
for (int i = 0; i < 5; i++) {
    printf("Bispo para a direita\n"); //Imprime a direção do movimento
}


printf("Mova a Rainha UMA casa para direita... \n");
    int i = 1;
   
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 1);
printf("Mova a Rainha DUAS casas para cima... \n");
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 3);
printf("Mova a Rainha CINCO casas para esquerda... \n");
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 8);

    return 0;
}
