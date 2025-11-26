#include <conio.h>  // Para kbhit() e getch()
#include "input.h"

void atualizar_direcao(Cobra *cobra) {
    if (kbhit()) {  // Se alguma tecla foi pressionada
        char tecla = getch();

        switch (tecla) {
            case 'w':
            case 'W':
                if (cobra->direcao != BAIXO) {
                    cobra->direcao = CIMA;
                }
                break;

            case 's':
            case 'S':
                if (cobra->direcao != CIMA) {
                    cobra->direcao = BAIXO;
                }
                break;

            case 'a':
            case 'A':
                if (cobra->direcao != DIREITA) {
                    cobra->direcao = ESQUERDA;
                }
                break;

            case 'd':
            case 'D':
                if (cobra->direcao != ESQUERDA) {
                    cobra->direcao = DIREITA;
                }
                break;
        }
    }
}
