#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <winver.h> // Suporte à exibição de versões

#include "monsters.h"
#include "deslocamento.h"

int main()
{
    int sair = 0;
    char tecla;
    int ret = 0;

    setupMonsters(5);

    while(sair != 1)
    {
        if(kbhit())
        {
            tecla = getch();
            switch(tecla)
            {
            case 75:
                moveEsquerda();
                //printf("Seta para esquerda\n");
                break;
            case 72:
                //moveCima();
                //printf("Seta para cima\n");
                break;
            case 77:
                moveDireita();
                //printf("Seta para direita\n");
                break;
            case 80:
                //moveBaixo();
                //printf("Seta para baixo\n");
                break;
            case 32:
                printf("Atirou!\n");
                criaTiro();
                break;
            case 27:
                printf("Sair\n");
                sair = 1;
                break;
            }
        }
        tecla = 0;
        desenhaMatriz();
        Sleep(20);
    }

    drawMonster(1);
    printf("\n");
    drawMonster(2);
    return 0;
}
