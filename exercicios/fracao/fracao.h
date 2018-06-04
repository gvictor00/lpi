#ifndef FRACAO_H_INCLUDED
#define FRACAO_H_INCLUDED

typedef struct fracao
{
    float numerador;
    float denominador;
} Fracao;

Fracao leFracao(int i);

float soma(Fracao f1, Fracao f2);
float subtracao(Fracao f1, Fracao f2);
float multiplica(Fracao f1, Fracao f2);
float divide(Fracao f1, Fracao f2);

Fracao soma_literal(Fracao f1, Fracao f2);
Fracao subrai_literal(Fracao f1, Fracao f2);
Fracao multiplica_literal(Fracao f1, Fracao f2);
Fracao divide_literal(Fracao f1, Fracao f2);
#endif // FRACAO_H_INCLUDED
