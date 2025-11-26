#include <stdio.h>
#include <windows.h>
#include "tabuleiro/tabuleiro.h"
#include "cobra/cobra.h"

int main() {
    Cobra cobra;
    inicializar_cobra(&cobra);

    animacao_inicial();
    Sleep(300);
    system("cls");

    while (1){
        mover_cobra(&cobra);
        system("cls");
        imprimir_tabuleiro(&cobra);
        Sleep(80);
    }

    return 0;
}
