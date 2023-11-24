#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int codigo;
    float soma[250];
    char nomeProduto[250][250];
    float preco[250];
    int quantidade[250];
    int somaQuantidade[250];
    float total = 0;
int m = 0;
    int d;
    
    do
    {
      printf ("1 - Adicionar uma Venda \n");
        printf ("2 - Sair e exibir resultados \n");
        printf ("Escolha uma das opções: \n");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 1:
            fflush(stdin);
            printf("Informe o nome do produto: ");
            gets(nomeProduto[m]);
            printf("Preço do produto: ");
            scanf("%f", &preco[m]);
            printf("Informe a quantidade do produto: ");
            scanf("%d", &quantidade[m]);
            printf("\n");

            total = preco[m] * quantidade[m];
            m++;
            break;
        case 2:

            for (d = 0; d < m; d++)
            {
                printf("%dº Venda\n", d + 1);
                printf("Nome do produto: %s\n", nomeProduto[d]);
                printf("Preço: %.2f\n", preco[d]);
                printf("Quantidade: %d\n", quantidade[d]);
                printf("\n");
            }
            break;
        }
    } while (codigo == 1);
    printf("Total final das vendas: %.2f", total);
    return 0;
}