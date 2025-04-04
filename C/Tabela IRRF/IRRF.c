#include <stdio.h>
float CalculaDeducao(float salario){

    float deducao;
    if (salario <= 2259.20) {
        deducao = 0;
    }
    else if (salario <= 2826.65) {
        deducao = (salario * 7.5 / 100) - 169.44;
    }
    else if (salario <= 3751.05) {
        deducao = (salario * 15 / 100) - 381.44;
    }
    else if (salario <= 4664.68) {
        deducao =(salario * 22.5 / 100) - 662.77;
    }
    else {
        deducao = (salario * 27.5 / 100) - 896.00;
    }
    return deducao;
}




int main()
{
    float salario = 0;
    printf("Qual e o seu salario? \n");
    scanf("%f", &salario);



    printf("Seu salario: R$ %.2f\n", salario);
    printf("Desconto IRRF: R$ %.2f\n", CalculaDeducao(salario));
    printf("Salario liquido: R$ %.2f\n", salario - CalculaDeducao(salario));

    return 0;
}
