#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
void main()
{
setlocale(LC_ALL, "portuguese");
    
    char nomes[5][550];
    int idades[5];
    float pesos[5];
    float altura[5];
    int d;

    
    for (d = 0; d < 5; d++) {
        printf("Digite o nome da %d° pessoa: ", d + 1);
        scanf("%s", nomes[d]);
        
        printf("Digite a idade de %s: ", nomes[d]);
        scanf("%d", &idades[d]);

        printf("Digite o peso de %s: ", nomes[d]);
        scanf("%f", &pesos[d]);

        printf("Digite a altura de %s: ", nomes[d]);
        scanf("%f", &altura[d]);

        system("cls");
    }

    
    int maior_altura = 0, menor_altura = 0;
    for (d = 1; d < 5; d++) {
        if (altura[d] > altura[maior_altura])
            maior_altura = d;
        if (altura[d] < altura[menor_altura])
            menor_altura = d;
    }

    printf("\nNome da pessoa mais alta: %s, Altura: %.2f metros\n", nomes[maior_altura], altura[maior_altura]);
    printf("Nome da pessoa mais baixa: %s, Altura: %.2f metros\n", nomes[menor_altura], altura[menor_altura]);

   
    int maior_peso = 0, menor_peso = 0;
    for (d = 1; d < 5; d++) {
        if (pesos[d] > pesos[maior_peso])
            maior_peso = d;
        if (pesos[d] < pesos[menor_peso])
            menor_peso = d;
    }

    printf("\nNome da pessoa com maior peso: %s, Peso: %.2f kg\n", nomes[maior_peso], pesos[maior_peso]);
    printf("Nome da pessoa com menor peso: %s, Peso: %.2f kg\n", nomes[menor_peso], pesos[menor_peso]);

    int mais_velha = 0, mais_nova = 0;
    for (d = 1; d < 5; d++) {
        if (idades[d] > idades[mais_velha])
            mais_velha = d;
        if (idades[d] < idades[mais_nova])
            mais_nova = d;
    }

    printf("\nNome da pessoa mais velha: %s, Idade: %d anos\n", nomes[mais_velha], idades[mais_velha]);
    printf("Nome da pessoa mais nova: %s, Idade: %d anos\n", nomes[mais_nova], idades[mais_nova]);

    return 0;
}
