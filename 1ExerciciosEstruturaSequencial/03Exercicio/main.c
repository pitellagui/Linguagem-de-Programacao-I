#include <stdio.h>
#include <math.h>

int main() {
    // Declarando as variaveis do tipo inteiro
    int A,B,C,D; 

    // Pedindo os valores de A, B, C e D e armazenando nas variaveis correspondentes
    scanf("%d %d %d %d", &A, &B, &C, &D);

    // Calculando a diferenca usando a formula dada
    int DIFERENCA = (A * B - C * D);

    // imprime a diferenca
    printf("DIFERENCA = %d\n", DIFERENCA);
    return 0;
}