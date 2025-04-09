#include <stdio.h>

// ---------- Torre ----------
void moverTorreCima(int passos) {
    if (passos <= 0) return;
    printf("Cima\n");
    moverTorreCima(passos - 1);
}

void moverTorreDireita(int passos) {
    if (passos <= 0) return;
    printf("Direita\n");
    moverTorreDireita(passos - 1);
}

// ---------- Bispo ----------
void moverBispoDiagonal(int passosVerticais, int passosHorizontais) {
    if (passosVerticais <= 0 || passosHorizontais <= 0) return;

    // Loop externo: vertical (Cima)
    for (int i = 0; i < passosVerticais; i++) {
        printf("Cima\n");

        // Loop interno: horizontal (Direita)
        for (int j = 0; j < passosHorizontais; j++) {
            printf("Direita\n");
        }
    }

    // Chamada recursiva para simular sequência de diagonais
    moverBispoDiagonal(passosVerticais - 1, passosHorizontais - 1);
}

// ---------- Rainha ----------
void moverRainha(int cima, int direita) {
    if (cima > 0) {
        printf("Cima\n");
        moverRainha(cima - 1, direita);
    } else if (direita > 0) {
        printf("Direita\n");
        moverRainha(cima, direita - 1);
    }
}

// ---------- Cavalo ----------
void moverCavalo(int maxY, int maxX) {
    // O movimento do Cavalo será: 2 para cima (Y), 1 para direita (X)
    for (int y = 0; y < maxY; y++) {
        for (int x = 0; x < maxX; x++) {
            if ((y + 2 < maxY) && (x + 1 < maxX)) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
            }

            if (x % 2 == 0) continue; // Controle de fluxo com continue
            if (x > 5) break;         // Quebra condicional do loop
        }
    }
}

int main() {
    // ---------- Configuração Inicial ----------
    int passosTorre = 3;
    int passosBispoV = 2;
    int passosBispoH = 2;
    int passosRainhaCima = 2;
    int passosRainhaDireita = 2;
    int maxY = 4;
    int maxX = 4;

    // ---------- Execução ----------

    // Torre
    printf("Movimento da Torre:\n");
    moverTorreCima(passosTorre);
    moverTorreDireita(passosTorre);
    printf("\n");

    // Bispo
    printf("Movimento do Bispo:\n");
    moverBispoDiagonal(passosBispoV, passosBispoH);
    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(passosRainhaCima, passosRainhaDireita);
    printf("\n");

    // Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo(maxY, maxX);
    printf("\n");

    return 0;
}
