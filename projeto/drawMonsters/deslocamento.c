#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "monsters.h"
#include "deslocamento.h"
#include "map.h"
#define MAX_TIROS 3
#define MAX_MONSTROS 10
int colunaAtual = 0;
int linhaAtual = 19;


/// Tiros
//=====================
int qtd_tiros = 0;
int tiros[MAX_TIROS][2] = {{0,0},{0,0},{0,0}};
int tem_tiro = 0;
//=====================

///Monstros
//=====================
// [0] = linha
// [1] = coluna
// [2] = ativo
int monstros[MAX_MONSTROS][3] =
{
    {0,1,1},
    {0,3,1},
    {0,5,1},
    {0,7,1},
    {0,9,1},
    {0,11,1},
    {0,13,1},
    {0,15,1},
    {0,17,1},
    {0,19,1}
};
//=====================

int moveDireita()
{
    if(colunaAtual < totalColunas-1)
    {
        colunaAtual++;
        return 1;
    }
    return 0;
}

int moveEsquerda()
{
    if(colunaAtual > 0)
    {
        colunaAtual--;
        return 1;
    }
    return 0;
}

int moveCima()
{
    if(linhaAtual > 0)
    {
        linhaAtual--;
        return 1;
    }
    return 0;
}

int moveBaixo()
{
    if(linhaAtual < totalLinhas-1)
    {
        linhaAtual++;
        return 1;
    }
    return 0;
}

int criaTiro()
{
    if(qtd_tiros < MAX_TIROS)
    {
        tiros[qtd_tiros][0] = linhaAtual - 1;
        tiros[qtd_tiros][1] = colunaAtual;
        tem_tiro = 1; // Tem um tiro no mapa
        qtd_tiros++;
    }
    return 1;
}

int moveTiro()
{
    int i = 0;
    int j = 0;
    if(tem_tiro)
    {
        for(i = 0; i < qtd_tiros; i++)
        {
            if(tiros[i][0] > 0)
            {
                for(j = 0; j < MAX_MONSTROS; j++){
                    if(tiros[i][0] == monstros[j][0] && tiros[i][1] == monstros[j][1] && monstros[j][2] == 1)
                    {
                        tiros[i][0] = 0;
                        monstros[j][2] = 0;
                    }
                }
                tiros[i][0]--;
            }
            else
            {
                tiros[i][0] = 0;
                qtd_tiros--;
            }
        }
        if(qtd_tiros == 0)
        {
            tem_tiro = 0;
        }
    }
    return 1;
}

void resetMatriz()
{
    int i = 0, j = 0;
    for(i = 0; i < totalLinhas; i++)
    {
        for(j = 0; j < totalColunas; j++)
        {
            caminho[i][j] = 0;
        }
    }

    int qtdMonst = 0;
    system("cls");
    printf("Posicao atual = [%d][%d]\n",linhaAtual,colunaAtual);
}

void desenhaMatriz()
{
    int i = 0, j = 0;
    char c = 'W';
    int monst = 0;
    int qtdMonst = 0;

    resetMatriz();
    caminho[linhaAtual][colunaAtual] = 1;

    // Cria os monstros na tela
    for(i = 0; i < MAX_MONSTROS; i++)
    {
        if(monstros[i][2] == 1)
        {
            caminho[monstros[i][0]][monstros[i][1]] = 3;
        }
    }

    //
    if(tem_tiro)
    {
        for(i = 0; i < qtd_tiros; i++)
        {
            caminho[tiros[i][0]][tiros[i][1]] = 2;
        }
    }
    for(i = 0; i < totalLinhas; i++)
    {
        for(j = 0; j < totalColunas; j++)
        {
            if(caminho[i][j] == 1)
            {
                printf("^ ");
            }
            else if(caminho[i][j] == 2)
            {
                printf("* ");
            }
            else if(caminho[i][j] == 3)
            {
                printf("W ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    moveTiro();
}
