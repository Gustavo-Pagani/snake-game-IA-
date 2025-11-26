#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

#include "tabuleiro/tabuleiro.h"
#include "cobra/cobra.h"
#include "input/input.h"
#include "game/game.h"

int main() {

    Cobra cobra;
    Fruta fruta;

    inicializar_cobra(&cobra);
    gerar_fruta(&fruta, &cobra);

    // 🔹 Mostra animação inicial
    animacao_inicial();
    Sleep(300);
    system("cls");

    while (1) {
        atualizar_direcao(&cobra);

        mover_cobra(&cobra);

        if (verificar_morte(&cobra)) {
            system("cls");
            printf("\n========== GAME OVER ==========\n");
            printf("A cobra morreu!\n");
            printf("Tamanho Final: %d\n", cobra.tamanho);
            printf("===============================\n");
            Sleep(1000);
            break;  // Finaliza jogo
        }

        system("cls");
        imprimir_tabuleiro(&cobra, &fruta);

        Sleep(150);
    }

    printf("\nPressione qualquer tecla para sair...");
    getch();

    return 0;
}
