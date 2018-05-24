#ifndef MONSTERS_H_INCLUDED
#define MONSTERS_H_INCLUDED

typedef struct monstro{
    int posLinha;
    int posColuna;
    int ativo;
    char ch;
}Monstro;

int getQtdMonstros();
void drawMonster(int type);

#endif // MONSTERS_H_INCLUDED
