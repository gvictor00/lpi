#ifndef INVSTRUCTS_H_INCLUDED
#define INVSTRUCTS_H_INCLUDED

typedef struct player{
    int linha;
    int coluna;
    int nome[20];
    int pontuacao;
}Player;

typedef struct monstro{
    int linha;
    int coluna;
    int vidas;
    int pontuacao;
}Monstro;

#endif // INVSTRUCTS_H_INCLUDED
