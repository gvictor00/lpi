#include <stdio.h>
#include <stdlib.h>

void exemplo1(int alunos)
{
    char notas[alunos];
    char nota = 'A';
    int i, soma = 0;
    for(i = 0; i < alunos; i++)
    {
        printf("Digite a nota do aluno #%d: ", i+1);
        scanf(" %c", &nota); // Inclui um espaço no comeco, para evitar o \n

        if(nota >= 'a' && nota <= 'e' || nota >= 'A' && nota <= 'E')
            notas[i] = nota;
        if(notas[i] == 'A' || notas[i] == 'a')
            soma += 10;
        else if(notas[i] == 'B' || notas[i] == 'b')
            soma += 8;
        else if(notas[i] == 'C' || notas[i] == 'c')
            soma += 6;
        else if(notas[i] == 'D' || notas[i] == 'd')
            soma += 4;
        else if(notas[i] == 'E' || notas[i] == 'e')
            soma += 2;
        else
            soma += 0;
    }
    printf("Media = %.2f\n", (float) soma/alunos);
}
