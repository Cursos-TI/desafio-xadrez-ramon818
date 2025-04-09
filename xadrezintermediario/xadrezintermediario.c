#include <stdio.h>

int main() {
    // Movimentos do Cavalo
    printf("\nMovimento do Cavalo:\n");

    // Loop for para mover duas casas para baixo
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");

        // Loop while para mover uma casa para a esquerda dentro do loop for
        if (i == 1) { // O loop while deve ser executado apenas ap�s o segundo "Baixo"
            int j = 0;
            while (j < 1) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}
