#include <stdio.h>

int main() {
    // Declara o tipo dos dados de entrada
    int a,b; 

    // scanf é a função de leitura de dados, o % é usado para declarar o tipo do dado
    // & è usado para acessar a variavel e armazenar o valor lido

    scanf("%i", &a);
    scanf("%i", &b);

    // Declarando o tipo da soma e realizando a operação de adição
    int sum = a + b;

    // printf para a saida de de dados, o % é usado para declarar o tipo do dado a ser impresso
    // \n é usado para pular uma linha
    printf("SOMA = %i\n", sum);
    return 0;
}