#include <stdlib.h>
#include <time.h>
#include "fruta.h"
#include "../tabuleiro/tabuleiro.h"

void gerar_fruta(Fruta *fruta, Cobra *cobra) {
    int valido;
    srand(time(NULL));

    do {
        valido = 1;
        fruta->x = rand() % LARGURA;
        fruta->y = rand() % ALTURA;

        for (int i = 0; i < cobra->tamanho; i++) {
            if (fruta->x == cobra->x[i] && fruta->y == cobra->y[i]) {
                valido = 0;
                break;
            }
        }
    } while (!valido);
}


