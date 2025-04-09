#include <stdio.h>

int main() {
    char peca;  // Armazena um único caractere
    int i = 0;

    // Entrada do usuário
    printf("Digite T (Torre), B (Bispo) ou R (Rainha):\n");
    scanf(" %c", &peca); // Evita problemas de buffer

    // Escolha da peça e movimentação
    switch (peca) {
        case 'T':
        case 't': // Torre: 5 casas para a direita (for)
            printf("Movimento da Torre:\n");
            for (i = 0; i < 5; i++) {
                if (i == 4) {
                    printf("Direita.\n");
                } else {
                    printf("Direita, ");
                }
            }
            break;

        case 'B':
        case 'b': // Bispo: 5 casas na diagonal (do-while)
            printf("\nMovimento do Bispo:\n");
            i = 0;
            do {
                printf("Cima e Direita\n");
                i++;
            } while (i < 5);
            break;

        case 'R':
        case 'r': // Rainha: 8 casas para a esquerda (while)
            printf("\nMovimento da Rainha:\n");
            i = 0;
            while (i < 8) {
                printf("Esquerda\n"); 
                i++;
            }
            break;

        default:
            printf("Peça inválida!\n");
    }

    return 0;
}