#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "deslocamento.h"
#include "map.h"

int colunaAtual = 0;
int linhaAtual = 0;

int moveDireita(){
    if(colunaAtual < totalColunas-1){
        colunaAtual++;
        return 1;
    }
    return 0;
}

int moveEsquerda(){
    if(colunaAtual > 0){
        colunaAtual--;
        return 1;
    }
    return 0;
}

int moveCima(){
    if(linhaAtual > 0){
        linhaAtual--;
        return 1;
    }
    return 0;
}

int moveBaixo(){
    if(linhaAtual < totalLinhas-1){
        linhaAtual++;
        return 1;
    }
    return 0;
}

void resetMatriz()
{
    int i = 0, j = 0;
    for(i = 0; i < totalLinhas; i++){
        for(j = 0; j < totalColunas; j++){
            caminho[i][j] = 0;
        }
    }
    system("cls");
    printf("Posicao atual = [%d][%d]\n\n",linhaAtual,colunaAtual);
}

void desenhaMatriz()
{
    resetMatriz();
    caminho[linhaAtual][colunaAtual] = 1;
    int i = 0, j = 0;
    for(i = 0; i < totalLinhas; i++){
        for(j = 0; j < totalColunas; j++){
                printf("%d ",caminho[i][j]);
            if(caminho[i][j] != 0)
            {
                //printf("o");
            }
        }
        printf("\n");
    }
}
