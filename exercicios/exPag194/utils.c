#include <stdio.h>
#include <stdlib.h>

void imprimeVetorInt(int vetor[], int tamanho)
{
    int i = 0;
    for(i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
}

void imprimeVetorFloat(float vetor[], int tamanho)
{
    int i = 0;
    for(i = 0; i < tamanho; i++)
    {
        printf("%.2f ", vetor[i]);
    }
}
