#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


int main() {
// Mover a Torre 5 casas para a direita
for (int i = 0; i < 5; i++) {
    printf("Torre Direita\n"); //Imprime a direção do movimento
}

// Mover o Bispo 5 casas Diagonal Cima e Direita 
int passos_bispo = 0;
    while (passos_bispo < 5) {
    printf("Bispo Diagonal Cima e Direita\n"); //Imprime a direção do movimento
    passos_bispo++;}

// Mover a Rainha 8 casas para a esquerda
    int passos_rainha = 0;
   
    do {
        printf("rainha esquerda\n"); //Imprime a direção do movimento
        passos_rainha++;}
    while (passos_rainha < 8);
    

    return 0;
}
