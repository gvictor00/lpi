#include <stdio.h>
#include <stdlib.h>
#include <fracao.h>

int main()
{
    float a = 0;
    float b = 0;
    char op = 0;
    float mmc = 0;
    float resultado_numerico = 0;

    printf("Digite a fracao (n/n): ");
    scanf("%f/%f", &a, &b);

    Fracao f1;
    f1.numerador = a;
    f1.denominador = b;

    printf("Digite a primeira fracao (n/n): ");
    scanf("%f/%f", &a, &b);

    Fracao f2;
    f2.numerador = a;
    f2.denominador = b;

    printf("Digite a operacao a ser realizada: ");
    scanf(" %c", &op);

    Fracao resultado;

    switch(op)
    {
    case '+':
        resultado.denominador = (f1.denominador*f2.denominador)/2;
        mmc = resultado.denominador;
        resultado.numerador = (mmc/f1.denominador)*f1.numerador + (mmc/f2.denominador)*f2.numerador;
        break;
    case '-':
        resultado.denominador = (f1.denominador*f2.denominador)/2;
        mmc = resultado.denominador;
        resultado.numerador = (mmc/f1.denominador)*f1.numerador - (mmc/f2.denominador)*f2.numerador;
        break;
    case '*':
        resultado.denominador = f1.denominador*f2.denominador;
        resultado.numerador = f1.numerador*f2.numerador;
        break;
    case '/':
        resultado.denominador = f1.denominador*f2.numerador;
        resultado.numerador = f1.numerador*f2.denominador;
        break;
    }
    resultado_numerico = resultado.numerador/resultado.denominador;
    printf("\n");
    printf("%.2f/%.2f = %.2f", resultado.numerador, resultado.denominador, resultado_numerico);
    return 0;
}
