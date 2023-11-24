#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main() {

      setlocale(LC_ALL, "portuguese");
    
    char nomes[5][999];
    int idades[5];
    float notas[5][3];
    float medias[5];
    int d;

    
    for (d = 0; d < 5; d++) {
        printf("Digite o nome do %d° aluno: ", d + 1);
        scanf("%s", nomes[d]);
        
        printf("Digite a idade do %s: ", nomes[d]);
        scanf("%d", &idades[d]);

        printf("Digite as 3 notas do %s: ", nomes[d]);
        scanf("%f %f %f", &notas[d][0], &notas[d][1], &notas[d][2]);

        
        medias[d] = (notas[d][0] + notas[d][1] + notas[d][2]) / 3;
    }

    
    printf("\nDados dos Alunos:\n");
    for (d = 0; d < 5; d++) {
        printf("\nAluno: %s, Idade: %d, Notas: %.2f %.2f %.2f, Média: %.2f\n",
               nomes[d], idades[d], notas[d][0], notas[d][1], notas[d][2], medias[d]);
        
     
        if (medias[d] >= 7.0) {
            printf("Situação: Aprovado\n");
        } else if (medias[d] >= 5.0) {
            printf("Situação: Recuperação\n");
        } else {
            printf("Situação: Reprovado\n");
        }
    }

    return 0;
}