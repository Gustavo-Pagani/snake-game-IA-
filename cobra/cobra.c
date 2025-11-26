#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cobra.h"

void inicializar_cobra(Cobra *cobra) {
    cobra->tamanho = 2;
    cobra->direcao = DIREITA;

    // Posição fixa no topo esquerdo (sem encostar na borda)
    cobra->x[0] = 2;
    cobra->y[0] = 2;

    switch (cobra->direcao) {
        case DIREITA:
            cobra->x[1] = cobra->x[0] - 1;
            cobra->y[1] = cobra->y[0];
            break;
        case ESQUERDA:
            cobra->x[1] = cobra->x[0] + 1;
            cobra->y[1] = cobra->y[0];
            break;
        case CIMA:
            cobra->x[1] = cobra->x[0];
            cobra->y[1] = cobra->y[0] + 1;
            break;
        case BAIXO:
            cobra->x[1] = cobra->x[0];
            cobra->y[1] = cobra->y[0] - 1;
            break;
    }
}
