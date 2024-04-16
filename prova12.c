#include <stdio.h>

int main() {
    int num;
    printf("Digite um número de 5 dígitos: ");
    scanf("%d", &num);

    // Realiza as operações de multiplicação
    int unidades = num % 10;
    int dezenas = (num / 10) % 10;
    int centenas = (num / 100) % 10;
    int milhar = (num / 1000) % 10;
    int dezena_milhar = (num / 10000) % 10;

    int resultado = unidades * 6 + dezenas * 7 + centenas * 10 + milhar * 13 + dezena_milhar * 16;

    // Calcula o resto por 9
    int resto = resultado % 9;

    printf("O resultado do resto por 9 é: %d\n", resto);

    return 0;
}