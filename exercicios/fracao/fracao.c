#include "fracao.h"
#include <stdio.h>
#include <stdlib.h>

Fracao leFracao(int i)
{
    Fracao f;

    printf("Digite a fracao #%d (n/n): ", i);
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

Fracao soma_literal(Fracao f1, Fracao f2)
{
    Fracao resultado;
    resultado.denominador = (f1.denominador*f2.denominador)/2;
    resultado.numerador = (resultado.denominador/f1.denominador)*f1.numerador + (resultado.denominador/f2.denominador)*f2.numerador;
    return resultado;
}

Fracao subrai_literal(Fracao f1, Fracao f2)
{
    Fracao resultado;
    resultado.denominador = (f1.denominador*f2.denominador)/2;
    resultado.numerador = (resultado.denominador/f1.denominador)*f1.numerador - (resultado.denominador/f2.denominador)*f2.numerador;
    return resultado;
}

Fracao multiplica_literal(Fracao f1, Fracao f2)
{
    Fracao resultado;
    resultado.denominador = f1.denominador*f2.denominador;
    resultado.numerador = f1.numerador*f2.numerador;
    return resultado;
}

Fracao divide_literal(Fracao f1, Fracao f2)
{
    Fracao resultado;
    resultado.denominador = f1.denominador*f2.numerador;
    resultado.numerador = f1.numerador*f2.denominador;
    return resultado;
}
