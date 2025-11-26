#ifndef TABULEIRO_H
#define TABULEIRO_H

#include "../cobra/cobra.h"  // Importa a cobra para imprimir
#include "../fruta/fruta.h"


#define ALTURA 20
#define LARGURA 40

void animacao_inicial();
void imprimir_tabuleiro(Cobra *cobra, Fruta *fruta);

#endif
