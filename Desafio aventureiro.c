// Luiz Fellipe Rodrigues da Silva
// Desafio Batalha Naval - Nivel Aventureiro

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
    // 2. Colocando os 4 navios (tamanho 3, valor 3)
    // ----------------------------------------------------
    
    // Navio 1 (Horizontal)
    // Na linha 1, colunas 1, 2, 3
    for (i = 0; i < 3; i++) {
        tabuleiro[1][1 + i] = 3; // 3 significa 'navio'
    }

    // Navio 2 (Vertical)
    // Na coluna 6, linhas 3, 4, 5
    for (i = 0; i < 3; i++) {
        tabuleiro[3 + i][6] = 3; // 3 significa 'navio'
    }

    // --- NOVO NÍVEL AVENTUREIRO ---

    // Navio 3 (Diagonal principal '\')
    // Comecando em [5][0], vai para [6][1], [7][2]
    for (i = 0; i < 3; i++) {
        // A linha e a coluna aumentam juntas
        tabuleiro[5 + i][0 + i] = 3; 
    }

    // Navio 4 (Diagonal secundaria '/')
    // Comecando em [0][9], vai para [1][8], [2][7]
    for (i = 0; i < 3; i++) {
        // A linha aumenta, mas a coluna diminui
        tabuleiro[0 + i][9 - i] = 3;
    }


    // ----------------------------------------------------
    // 3. Imprimindo o tabuleiro na tela
    // ----------------------------------------------------
    printf("--- Tabuleiro Batalha Naval (Nivel Aventureiro) ---\n");
    
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