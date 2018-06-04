#include <stdio.h>
#include <stdlib.h>
#include "fracao.h"

int main()
{
    char op = 0;
    float resultado_numerico = 0;

    Fracao f1, f2, resultado;

    f1 = leFracao(1);
    f2 = leFracao(2);

    switch(op)
    {
    case '+':
        resultado_numerico = soma(f1,f2);
        break;
    case '-':
        resultado_numerico = subtracao(f1,f2);
        break;
    case '*':
        resultado_numerico = multiplica(f1,f2);
        break;
    case '/':
        resultado_numerico = divide(f1,f2);
        break;
    }
    resultado_numerico = resultado.numerador/resultado.denominador;
    printf("\n");
    printf("%.2f/%.2f = %.2f", resultado.numerador, resultado.denominador, resultado_numerico);
    return 0;
}

Fracao leFracao(int i)
{
    Fracao f;

    printf("Digite a primeira fracao (n/n): ");
    scanf("%f/%f", &f.numerador, &f.denominador);

    return f;
}

float soma(Fracao f1, Fracao f2)
{
    return (((f1.denominador*f2.denominador)/2)/f1.denominador)*f1.numerador + (((f1.denominador*f2.denominador)/2)/f2.denominador)*f2.numerador;
}

float subtracao(Fracao f1, Fracao f2)
{
    return (((f1.denominador*f2.denominador)/2)/f1.denominador)*f1.numerador - (((f1.denominador*f2.denominador)/2)/f2.denominador)*f2.numerador;
}

float multiplica(Fracao f1, Fracao f2)
{
    return f1.numerador*f2.numerador/f1.denominador*f2.denominador;
}

float divide(Fracao f1, Fracao f2)
{
    return f1.numerador*f2.denominador/f1.denominador*f2.numerador;
}
