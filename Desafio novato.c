// Luiz Fellipe Rodrigues da Silva
// Desafio Batalha Naval - Nivel Novato

#include <stdio.h>

int main() {
    
    // Variaveis de contagem para os loops
    int i, j;
    
    // Nosso tabuleiro 10x10
    int tabuleiro[10][10];

    // ----------------------------------------------------
    // 1. Limpando o tabuleiro (colocando 0 em tudo)
    // ----------------------------------------------------
    
    // Loop 'for' para as linhas (i)
    for (i = 0; i < 10; i++) {
        // Loop 'for' para as colunas (j)
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; // 0 significa 'agua'
        }
    }

    // ----------------------------------------------------
    // 2. Colocando os navios (tamanho 3, valor 3)
    // ----------------------------------------------------
    
    // Navio 1 (Horizontal)
    // Vamos colocar na linha 2, comecando na coluna 2
    // Ele vai ficar em [2][2], [2][3], [2][4]
    for (i = 0; i < 3; i++) {
        tabuleiro[2][2 + i] = 3; // 3 significa 'navio'
    }

    // Navio 2 (Vertical)
    // Vamos colocar na coluna 5, comecando na linha 5
    // Ele vai ficar em [5][5], [6][5], [7][5]
    for (i = 0; i < 3; i++) {
        tabuleiro[5 + i][5] = 3; // 3 significa 'navio'
    }

    // ----------------------------------------------------
    // 3. Imprimindo o tabuleiro na tela
    // ----------------------------------------------------
    printf("--- Tabuleiro Batalha Naval ---\n");
    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            // Imprime o valor da posicao (0 ou 3) e um espaco
            printf("%d ", tabuleiro[i][j]);
        }
        // Quando o loop das colunas (j) termina, 
        // pulamos uma linha para desenhar a proxima linha
        printf("\n");
    }

    return 0;
}