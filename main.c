#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

#include "tabuleiro/tabuleiro.h"
#include "cobra/cobra.h"
#include "input/input.h"
#include "game/game.h"
#include "fruta/fruta.h"
// #include "ia/ia.h"  // Futuro

void iniciar_jogo_manual();  // Protótipo para organização

int main() {
    int opcao;

    do {
        system("cls");
        printf("====== MENU PRINCIPAL ======\n");
        printf("1 - Jogar manualmente\n");
        printf("2 - Resolver com IA (futuro)\n");
        printf("0 - Sair\n");
        printf("===========================\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        fflush(stdin);

        switch (opcao) {
            case 1:
                iniciar_jogo_manual();
                break;
            case 2:
                system("cls");
                printf("IA ainda nao implementada!\n");
                printf("Vamos programar isso mais tarde.\n");
                Sleep(1500);
                break;
            case 0:
                printf("Saindo...\n");
                Sleep(1000);
                break;
            default:
                printf("Opcao invalida!\n");
                Sleep(1000);
        }
    } while (opcao != 0);

    return 0;
}

void iniciar_jogo_manual() {
    Cobra cobra;
    Fruta fruta;

    inicializar_cobra(&cobra);
    gerar_fruta(&fruta, &cobra);

    animacao_inicial();
    Sleep(300);
    system("cls");

    while (1) {
        atualizar_direcao(&cobra);
        mover_cobra(&cobra);

        if (verificar_morte(&cobra)) {
            system("cls");
            printf("\n========== GAME OVER ==========\n");
            printf("Morreu! Tamanho final: %d\n", cobra.tamanho);
            printf("===============================\n");
            Sleep(1500);
            break;
        }

        verificar_comida(&cobra, &fruta);

        system("cls");
        imprimir_tabuleiro(&cobra, &fruta);
        Sleep(200);
    }

    printf("\nPressione qualquer tecla para voltar ao menu...");
    getch();
}
