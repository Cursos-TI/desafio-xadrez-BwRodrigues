#include <stdio.h>

// Desafio de Xadrez - MateCheck,

int main() {
    // Número de casas que cada peça vai se mover
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // ----------------- Torre -----------------
    printf("🏰 Torre - Movendo %d casas para a direita:\n", casasTorre);
    for (int i = 1; i <= casasTorre; i++) {
        printf("Passo %d: Direita\n", i);
    }

    // ----------------- Bispo -----------------
    printf("\n🧙‍♂️ Bispo - Movendo %d casas na diagonal (Cima + Direita):\n", casasBispo);
    int i = 1;
    while (i <= casasBispo) {
        printf("Passo %d: Cima + Direita\n", i);
        i++;
    }

       // ----------------- Rainha -----------------
    printf("\n👑 Rainha - Movendo %d casas para a esquerda:\n", casasRainha);
    int j = 1;
    do {
        printf("Passo %d: Esquerda\n", j);
        j++;
    } while (j <= casasRainha);

    printf("\n✅ Fim da simulação - Nível Novato.\n");

    

    

    return 0;
}
