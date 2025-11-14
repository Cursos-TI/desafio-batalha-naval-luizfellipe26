// Luiz Fellipe Rodrigues da Silva
// Desafio Batalha Naval - Nivel Mestre

#include <stdio.h>

int main() {
    
    // Variaveis de contagem para os loops
    int i, j;
    
    // Nosso tabuleiro 10x10
    int tabuleiro[10][10];

    // Matrizes 5x5 para as 3 habilidades
    int hab_cone[5][5];
    int hab_cruz[5][5];
    int hab_octaedro[5][5]; // (Formato de Losango/Diamante)
    
    int centro = 2; // O ponto central de uma matriz 5x5 (posicao 2)

    // ----------------------------------------------------
    // 1. Limpando o tabuleiro (colocando 0 em tudo)
    // ----------------------------------------------------
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; // 0 significa 'agua'
        }
    }

    // ----------------------------------------------------
    // 2. Colocando os 4 navios (tamanho 3, valor 3)
    // ----------------------------------------------------
    for (i = 0; i < 3; i++) {
        tabuleiro[1][1 + i] = 3; // Navio 1 (Horizontal)
        tabuleiro[3 + i][6] = 3; // Navio 2 (Vertical)
        tabuleiro[5 + i][0 + i] = 3; // Navio 3 (Diagonal '\')
        tabuleiro[0 + i][9 - i] = 3; // Navio 4 (Diagonal '/')
    }

    // ----------------------------------------------------
    // 3. Criando as Matrizes de Habilidade (com loops e 'if')
    // ----------------------------------------------------
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            
            // Habilidade 1: Cone (triangulo apontando para baixo)
            if (j >= centro - i && j <= centro + i) {
                hab_cone[i][j] = 1; // 1 = acerto
            } else {
                hab_cone[i][j] = 0; // 0 = sem efeito
            }

            // Habilidade 2: Cruz
            if (i == centro || j == centro) { // Se for a linha central OU a coluna central
                hab_cruz[i][j] = 1;
            } else {
                hab_cruz[i][j] = 0;
            }

            // Habilidade 3: Octaedro (Losango/Diamante)
            // abs(i - centro) + abs(j - centro) <= centro
            int dist_i = (i > centro) ? (i - centro) : (centro - i);
            int dist_j = (j > centro) ? (j - centro) : (centro - j);
            
            if (dist_i + dist_j <= centro) {
                hab_octaedro[i][j] = 1;
            } else {
                hab_octaedro[i][j] = 0;
            }
        }
    }

    // ----------------------------------------------------
    // 4. Sobrepondo as Habilidades no Tabuleiro
    // (Vamos marcar as areas com o valor 5)
    // ----------------------------------------------------

    // --- Aplicando o CONE (origem no tabuleiro: [2][2]) ---
    int origem_i = 2;
    int origem_j = 2;
    for (i = 0; i < 5; i++) { // Loop da matriz de habilidade
        for (j = 0; j < 5; j++) {
            // Se a habilidade acerta (==1)
            if (hab_cone[i][j] == 1) {
                // Calcula a posicao real no tabuleiro 10x10
                int i_tabuleiro = origem_i - centro + i;
                int j_tabuleiro = origem_j - centro + j;
                
                // Checa se estamos dentro das bordas do tabuleiro
                if (i_tabuleiro >= 0 && i_tabuleiro < 10 && j_tabuleiro >= 0 && j_tabuleiro < 10) {
                    tabuleiro[i_tabuleiro][j_tabuleiro] = 5; // 5 = area de efeito
                }
            }
        }
    }

    // --- Aplicando a CRUZ (origem no tabuleiro: [5][5]) ---
    origem_i = 5;
    origem_j = 5;
    for (i = 0; i < 5; i++) { 
        for (j = 0; j < 5; j++) {
            if (hab_cruz[i][j] == 1) {
                int i_tabuleiro = origem_i - centro + i;
                int j_tabuleiro = origem_j - centro + j;
                
                if (i_tabuleiro >= 0 && i_tabuleiro < 10 && j_tabuleiro >= 0 && j_tabuleiro < 10) {
                    tabuleiro[i_tabuleiro][j_tabuleiro] = 5;
                }
            }
        }
    }

    // --- Aplicando o OCTAEDRO (origem no tabuleiro: [8][8]) ---
    origem_i = 8;
    origem_j = 8;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (hab_octaedro[i][j] == 1) {
                int i_tabuleiro = origem_i - centro + i;
                int j_tabuleiro = origem_j - centro + j;
                
                if (i_tabuleiro >= 0 && i_tabuleiro < 10 && j_tabuleiro >= 0 && j_tabuleiro < 10) {
                    tabuleiro[i_tabuleiro][j_tabuleiro] = 5;
                }
            }
        }
    }

    // ----------------------------------------------------
    // 5. Imprimindo o tabuleiro final
    // (0=Agua, 3=Navio, 5=Efeito da Habilidade)
    // ----------------------------------------------------
    printf("--- Tabuleiro Batalha Naval (Nivel Mestre) ---\n");
    printf(" (0=Agua, 3=Navio, 5=Habilidade)\n");
    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Pula a linha
    }

    return 0;
}