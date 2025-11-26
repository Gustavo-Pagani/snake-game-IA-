#ifndef FRUTA_H
#define FRUTA_H

#include "../cobra/cobra.h"

typedef struct {
    int x;
    int y;
} Fruta;

void gerar_fruta(Fruta *fruta, Cobra *cobra);


#endif
