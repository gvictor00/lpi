#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "deslocamento.h"
#include "map.h"

int colunaAtual = 0;
int linhaAtual = 0;

int moveDireita(){
    if(linhaAtual < 20){
        linhaAtual++;
        return 1;
    }
    return 0;
}

int moveEsquerda(){
    if(linhaAtual > 0){
        linhaAtual--;
        return 1;
    }
    return 0;
}

int moveCima(){
    if(colunaAtual > 0){
        colunaAtual--;
        return 1;
    }
    return 0;
}

int moveBaixo(){
    if(colunaAtual < 20){
        colunaAtual++;
        return 1;
    }
    return 0;
}

void resetMatriz()
{
    int i = 0, j = 0;
    for(i = 0; i < totalColunas; i++){
        for(j = 0; j < totalLinhas; j++){
            caminho[i][j] = 0;
        }
    }
    system("cls");
}

void desenhaMatriz()
{
    resetMatriz();
    caminho[linhaAtual][colunaAtual] = 1;
    int i = 0, j = 0;
    for(i = 0; i < totalLinhas; i++){
        for(j = 0; j < totalColunas; j++){
                printf("%d ",caminho[i][j]);
            if(caminho[i][j] == 0)
            {
             //   printf(" ");
            }
            else
            {
//                printf("o");
            }
        }
        printf("\n");
    }
}
