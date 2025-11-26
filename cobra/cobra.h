#ifndef COBRA_H
#define COBRA_H


#define TAMANHO_MAXIMO 300  // Limite da cobra

typedef enum {
    CIMA,
    BAIXO,
    ESQUERDA,
    DIREITA
} Direcao;

typedef struct {
    int x[TAMANHO_MAXIMO];
    int y[TAMANHO_MAXIMO];
    int tamanho;
    Direcao direcao;
} Cobra;

void inicializar_cobra(Cobra *cobra);

#endif
