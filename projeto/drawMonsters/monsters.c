#include <stdio.h>
#include <stdlib.h>
#include "monsters.h"
#include "desenhos.h"

int qtd_monstros = 0;
Monstro *monstros = NULL;

int getQtdMonstros(){
    return qtd_monstros;
}

Monstro* getVetorMonstros(){
    return monstros;
}

void setupMonsters(int quantidade, char charactere)
{
    int i = 0;
    Monstro *monstros = malloc(quantidade*sizeof(Monstro));

    for(i = 0; i < quantidade; i++)
    {
        monstros[i].ativo = 1;
        monstros[i].posColuna = i + 2;
        monstros[i].posLinha = 18;
        monstros[i].ch = 'W';
        qtd_monstros++;

        printf("Criou o monstro: %d | %d | %d | %c\n", monstros[i].ativo, monstros[i].posColuna, monstros[i].posLinha,
               monstros[i].ch);
    }
}

void drawMonster(int type)
{
    int blackBox = 219;
    int whiteBox = 255;
    int i = 0, j = 0;

    if(type == 1){
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < column1; j++)
        {
            printf("%c", desenho[i][j] == 1 ? (char)blackBox : (char)whiteBox);
        }
        printf("\n");
    }
    }
    else if(type == 2){
    for(i = 0; i < row2; i++)
    {
        for(j = 0; j < column2; j++)
        {
            printf("%c", desenho2[i][j] == 1 ? (char)blackBox : (char)whiteBox);
        }
        printf("\n");
    }
    }

}
