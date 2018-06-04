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

    Fracao f1, f2, resultado;

    f1 = leFracao(1);
    f2 = leFracao(2);

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

Fracao leFracao(int i){
    Fracao f;

    printf("Digite a primeira fracao (n/n): ");
    scanf("%f/%f", &f.numerador, &f.denominador);

    return f;
}
