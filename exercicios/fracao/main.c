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
        resultado = soma_literal(f1,f2);
        resultado_numerico = soma(f1,f2);
        break;
    case '-':
        resultado = subrai_literal(f1,f2);
        resultado_numerico = subtracao(f1,f2);
        break;
    case '*':
        resultado = multiplica_literal(f1,f2);
        resultado_numerico = multiplica(f1,f2);
        break;
    case '/':
        resultado = divide_literal(f1,f2);
        resultado_numerico = divide(f1,f2);
        break;
    }
    resultado_numerico = resultado.numerador/resultado.denominador;
    printf("\n");
    printf("%.2f/%.2f = %.2f", resultado.numerador, resultado.denominador, resultado_numerico);
    return 0;
}
