#ifndef FRACAO_H_INCLUDED
#define FRACAO_H_INCLUDED

typedef struct fracao
{
    float numerador;
    float denominador;
} Fracao;

Fracao leFracao(int i);

float soma(Fracao, Fracao);
float subtracao(Fracao, Fracao);
float multiplica(Fracao, Fracao);
float divide(Fracao, Fracao);

Fracao soma_literal(Fracao, Fracao);
Fracao subrai_literal(Fracao, Fracao);
Fracao multiplica_literal(Fracao, Fracao);
Fracao divide_literal(Fracao, Fracao);
#endif // FRACAO_H_INCLUDED
