#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void main()
{

    setlocale(LC_ALL, "portuguese");

    int numeros[5];
    int somaPares = 0, qtdPares = 0;
    int qtdImpares = 0, qtdNegativos = 0;
    int maior, menor;
    float mediaPares, mediaTotal;
    int d;

    printf("Digite 5 números inteiros:\n");
    for (d = 0; d < 5; d++)
    {
        scanf("%d", &numeros[d]);

        if (numeros[d] % 2 != 0)
        {
            qtdImpares++;
        }

        if (numeros[d] < 0)
        {
            qtdNegativos++;
        }

        if (numeros[d] % 2 == 0)
        {
            somaPares += numeros[d];
            qtdPares++;
        }

        if (d == 0)
        {
            maior = menor = numeros[d];
        }
        else
        {
            if (numeros[d] > maior)
            {
                maior = numeros[d];
            }
            if (numeros[d] < menor)
            {
                menor = numeros[d];
            }
        }
    }

    if (qtdPares > 0)
    {
        mediaPares = (float)somaPares / qtdPares;
    }
    else
    {
        mediaPares = 0;
    }

    mediaTotal = (float)(numeros[0] + numeros[1] + numeros[2] + numeros[3] + numeros[4]) / 5;

    printf("\nQuantidade de números ímpares: %d\n", qtdImpares);
    printf("Quantidade de números negativos: %d\n", qtdNegativos);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média de números pares: %.2f\n", mediaPares);
    printf("Média de todos os números: %.2f\n", mediaTotal);
}