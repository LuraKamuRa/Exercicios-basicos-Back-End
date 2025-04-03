#include <stdio.h>

int main()
{
    float salario = 2890;
    float desconto = 0;

    if (salario <= 2259.20) {
        printf("Isento de imposto\n");
    }
    else if (salario <= 2826.65) {
        desconto = (salario * 7.5 / 100) - 169.44;
    }
    else if (salario <= 3751.05) {
        desconto = (salario * 15 / 100) - 381.44;
    }
    else if (salario <= 4664.68) {
        desconto = (salario * 22.5 / 100) - 662.77;
    }
    else {
        desconto = (salario * 27.5 / 100) - 896.00;
    }

    printf("Seu salário: R$ %.2f\n", salario);
    printf("Desconto IRRF: R$ %.2f\n", desconto);
    printf("Salário líquido: R$ %.2f\n", salario - desconto);

    return 0;
}
