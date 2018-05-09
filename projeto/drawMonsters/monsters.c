#include <stdio.h>
#include <stdlib.h>
#include "desenhos.h"

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
