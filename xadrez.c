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
    
    printf("\n");
    printf("\n");
    
    printf("Torre:\n"); // Movimento da Torre (do-while)
    printf("\n");
    
    do {
        printf("Direita\n");
        torre++;
    } while (torre < 5);
    
    printf("\n");
    printf("\n");
    
    printf("Rainha:\n"); // Movimento da Rainha (for)
    printf("\n");
    
    for (int rainha = 0; rainha < 8; rainha++) {
        printf("Esquerda\n");
    }    
    
    return 0;

}