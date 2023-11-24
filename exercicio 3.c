#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void main()
{
    setlocale(LC_ALL, "portuguese");

    int codigo;
    char nomes[250][250];
    char numero[250][15];
    int i;
    int d = 0;

    do
    {
        printf("1 - Adicionar um número \n");
        printf("2 - Sair e exibir resultados \n");
        printf("Escolha uma das opções: \n");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 1:

            fflush(stdin);
            printf("\n\tInforme o nome para contato: ");
            gets(nomes[d]);
            printf("\tInforme o número de contato: ");
            scanf("%s", &numero[d]);
            printf("\n");

            d++;

            break;
        case 2:
            system("cls || clear");
            for (i = 0; i < d; i++)
            {
                printf("%dº contato\n", i + 1);
                printf("Nome: %s\n", nomes[i]);
                printf("Número: %s\n", numero[i]);
                printf("\n");
            }
            break;
        }

    } while (codigo == 1);

}