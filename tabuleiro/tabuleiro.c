#include "tabuleiro.h"
#include<stdio.h>
#include<windows.h>



void imprimir_tabuleiro() {
    int i, j;

    // Borda superior
    for (i = 0; i < LARGURA + 2; i++) {
        printf("%c",219);
        Sleep(5);
    }
    printf("\n");

    // Laterais
    for (i = 0; i < ALTURA; i++) {
        printf("%c",219);  // Borda esquerda
        Sleep(5);
        for (j = 0; j < LARGURA; j++) {
            printf(" ");  // Espaço vazio (será preenchido depois)
        }
        printf("%c\n",219);  // Borda direita
        Sleep(5);
    }

    // Borda inferior
    for (i = 0; i < LARGURA + 2; i++) {
        printf("%c",219);
        Sleep(5);
    }
    printf("\n");
}
