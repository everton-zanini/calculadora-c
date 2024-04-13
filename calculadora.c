#include <stdio.h>

int main() {
    char operacao;
    float num1, num2, resultado;

    printf("Calculadora Simples\n");
    printf("Escolha a operacao:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Opcao: ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (operacao) {
        case '1':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '2':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '3':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '4':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: Divisao por zero!\n");
            }
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
