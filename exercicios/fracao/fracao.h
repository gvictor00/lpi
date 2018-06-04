#ifndef FRACAO_H_INCLUDED
#define FRACAO_H_INCLUDED

typedef struct fracao
{
    float numerador;
    float denominador;
} Fracao;

Fracao leFracao(int i);

float soma(Fracao f1, Fracao f2);
float subrai(Fracao f1, Fracao f2);
float multiplica(Fracao f1, Fracao f2);
float divide(Fracao f1, Fracao f2);

#endif // FRACAO_H_INCLUDED
