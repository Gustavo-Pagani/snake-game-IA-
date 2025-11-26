#include "game.h"
#include "../tabuleiro/tabuleiro.h"

int verificar_morte(Cobra *cobra) {
    // 1 Colisão com parede
    if (cobra->x[0] < 0 || cobra->x[0] >= LARGURA ||
        cobra->y[0] < 0 || cobra->y[0] >= ALTURA) {
        return 1;
    }

    // 2 Colisão com o  corpo
    for (int i = 1; i < cobra->tamanho; i++) {
        if (cobra->x[0] == cobra->x[i] && cobra->y[0] == cobra->y[i]) {
            return 1;
        }
    }

    return 0; // Ainda vivo
}


void verificar_comida(Cobra *cobra, Fruta *fruta){

    if (cobra->x[0] == fruta->x && cobra->y[0] == fruta->y){
        cobra->tamanho++;
        gerar_fruta(fruta, cobra);
    }


}

