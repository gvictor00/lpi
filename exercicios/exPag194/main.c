#include <stdio.h>
#include <stdlib.h>

int main()
{

    int soma = 0, i = 0, peso = 0;
    int somaPesos = 0;
    int somaPonderada = 0;
    int vetor[10] = {0};
    float normalizado[10] = {0};
    int mult = 1;

    int maior = 0, menor = 10000;

    // Lê o vetor
    for(i = 0; i < 10; i++)
    {
        printf("Digite o numero #%d: ", i+1);
        scanf("%d",&vetor[i]);

        if(vetor[i] < menor)
            menor = vetor[i];

        if(vetor[i] > maior)
            maior = vetor[i];

        // Realiza a soma
        soma += vetor[i];

        // Verifica se é uma posicao par e multiplica, caso seja.
        if(i%2)
        {
            mult *= vetor[i];
        }

        // Realiza a soma ponderada
        peso = i + 1;
        somaPesos += peso;
        somaPonderada += vetor[i] * peso;
    }

    printf("Soma: %d\n", soma);
    printf("Multiplicacao: %d\n", mult);
    printf("Media ponderada: %d\n", (somaPonderada/somaPesos));

    printf("Vetor normalizado: ");
    for(i = 0; i < 10; i++)
    {
        normalizado[i] = (float)(vetor[i]-menor)/(maior - menor);
        printf("%.2f ", normalizado[i]);
    }
    printf("\n");
    return 0;
}
