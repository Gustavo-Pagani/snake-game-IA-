#include <stdio.h>
#include "tabuleiro.h"
#include <windows.h>
#include <stdio.h>
#include <windows.h> // Para Sleep()
#include "tabuleiro.h"

void animacao_inicial() {
    int i, j;

    // Borda superior
    for (i = 0; i < LARGURA + 2; i++) {
        printf("%c", 219);
    }
    printf("\n");
    Sleep(15);

    // Área interna (sem cobra ainda)
    for (i = 0; i < ALTURA; i++) {
        printf("%c", 219); // Borda esquerda
        for (j = 0; j < LARGURA; j++) {
            printf(" ");
        }
        printf("%c\n", 219); // Borda direita
        Sleep(15); // Delay por linha
    }

    // Borda inferior
    for (i = 0; i < LARGURA + 2; i++) {
        printf("%c", 219);
    }
    printf("\n");
    Sleep(15);
}
void imprimir_tabuleiro(Cobra *cobra, Fruta *fruta) {
    int i, j, k;

    // Borda superior
    for (i = 0; i < LARGURA + 2; i++) {
        printf("%c",219);
    }
    printf("\n");

    // Área interna
    for (i = 0; i < ALTURA; i++) {
        printf("%c",219);  // Borda esquerda

        for (j = 0; j < LARGURA; j++) {
            int desenhou = 0;

            if (fruta->x == j && fruta->y == i){
                printf("*");
                desenhou = 1;
            }

            // Verifica se a posição coincide com a cobra
            for (k = 0; k < cobra->tamanho; k++) {
                if (cobra->x[k] == j && cobra->y[k] == i) {
                    if (k == 0)
                        printf("S");  // Cabeça
                    else
                        printf("o");  // Corpo
                    desenhou = 1;
                    break;
                }
            }

            if (!desenhou)
                printf(" ");
        }

        printf("%c\n",219);  // Borda direita
    }

    // Borda inferior
    for (i = 0; i < LARGURA + 2; i++) {
        printf("%c",219);
    }
    printf("\n");
}



