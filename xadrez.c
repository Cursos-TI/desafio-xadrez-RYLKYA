#include <stdio.h>

int main() {
    int bispo = 0;
    int torre = 0;
    
    printf("Bispo:\n"); // Movimento do Bispo (while)
    printf("\n");
    
    while (bispo < 5) {
        printf("Cima, Direita\n");
        bispo++;
    }
    
    printf("\n\n");
    
    printf("Torre:\n"); // Movimento da Torre (do-while)
    printf("\n");
    
    do {
        printf("Direita\n");
        torre++;
    } while (torre < 5);
    
    printf("\n\n");
    
    printf("Rainha:\n"); // Movimento da Rainha (for)
    printf("\n");
    
    for (int rainha = 0; rainha < 8; rainha++) {
        printf("Esquerda\n");
    }    
    
    printf("\n\n");
    
    printf("Cavalo:\n"); // Movimento do Cavalo (loops aninhados)
    printf("\n");
    
    int casasBaixo = 2;
    int casasEsquerda = 1;

    for (int i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");
        
        int j = 0;
        while (i == casasBaixo - 1 && j < casasEsquerda) {
            printf("Esquerda\n");
            j++;
        }
    }

    return 0;
}