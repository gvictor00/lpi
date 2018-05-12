#include <stdio.h>
#include <stdlib.h>
#include "monsters.h"
#include "deslocamento.h"

int main()
{
    int sair = 0;
    char tecla;
    int ret = 0;

    tecla = getch();
    printf("%d",tecla);
    while(sair != 1)
    {
        tecla = getch();
        switch(tecla)
        {
        case 75:
            moveEsquerda();
            //printf("Seta para esquerda\n");
            desenhaMatriz();
            break;
        case 72:
            moveCima();
            //printf("Seta para cima\n");
            desenhaMatriz();
            break;
        case 77:
            moveDireita();
            //printf("Seta para direita\n");
            desenhaMatriz();
            break;
        case 80:
            moveBaixo();
            //printf("Seta para baixo\n");
            desenhaMatriz();
            break;
        case 32:
            printf("Atirou!\n");
            break;
        case 27:
            printf("Sair\n");
            sair = 1;
            break;
        }
        tecla = 0;
    }

    drawMonster(1);
    printf("\n");
    drawMonster(2);
    return 0;
}
