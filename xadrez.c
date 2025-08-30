#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispo(int movimentos) {
    if (movimentos == 0) return;

    for (int i = 0; i < 1; i++) {
        printf("Cima\n");
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }

    moverBispo(movimentos - 1);
}

int main() {
    printf("Bispo:\n\n");
    moverBispo(5);

    printf("\n\n");

    printf("Torre:\n\n");
    moverTorre(5);

    printf("\n\n");

    printf("Rainha:\n\n");
    moverRainha(8);

    printf("\n\n");

    printf("Cavalo:\n\n");
    int movimentosCima = 2;
    int movimentosDireita = 1;

    for (int i = 0; i < movimentosCima; i++) {
        if (i == 1) {
            for (int j = 0; j < movimentosDireita; j++) {
                if (j == 0) {
                    printf("Direita\n");
                    break;
                }
            }
        }
        if (i < movimentosCima) {
            printf("Cima\n");
            continue;
        }
    }

    return 0;
}