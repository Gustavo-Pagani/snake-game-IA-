#include <stdio.h>
#include "tabuleiro/tabuleiro.h"
#include "cobra/cobra.h"

int main() {
    Cobra cobra;
    inicializar_cobra(&cobra);

    imprimir_tabuleiro(&cobra);

    return 0;
}
