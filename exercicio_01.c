#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    int cont1 = 0;
    int cont2 = 0;
    int cont3 = 0;
    int cont4 = 0;
    int nulo = 0;
    int votacao;
    int i;
    int vetor[5];
    int comparacao;
    int indicevencedor;

    do
    {
        printf("Digite 1 para votar no Seu Pedro\n");
        printf("Digite 2 para votar na Dona Maria\n");
        printf("Digite 3 para votar na Tia Daiana\n");
        printf("Digite 4 para votar no Seu Antônio\n");
        printf("Digite 5 para votar NULO\n");
        printf("Ou digite o número 0 para sair\n");
        scanf("%i",&votacao);

        switch(votacao)
        {
        case 1:
            cont1++;
            break;
        case 2:
            cont2++;
            break;
        case 3:
            cont3++;
            break;
        case 4:
            cont4++;
            break;
        case 5:
            nulo++;
            break;
        case 0:
            printf("Fim da votação.\n");
        default:
            printf("Valor invalido.\n");
        }
    }
    while(votacao != 0 );

    for(i = 0; i <= 4; i++)
    {
        switch(i)
        {
        case 0:
            vetor[i] = cont1;
            break;
        case 1:
            vetor[i] = cont2;
            break;
        case 2:
            vetor[i] = cont3;
            break;
        case 3:
            vetor[i] = cont4;
            break;
        case 4:
            vetor[i] = nulo;
        }
    }

    for(i = 0; i <= 4; i++)
    {
        if (i == 0)
        {
            comparacao = vetor[i];
            indicevencedor = i;
        }
        if (comparacao < vetor[i])
        {
            comparacao = vetor[i];
            indicevencedor = i;
        }
    }
    printf("O vencedor teve %i votos!\n", comparacao);
    printf("Nome do vencedor: ");

    switch(indicevencedor)
    {
    case 0:
        printf("Seu Pedro\n");
        break;
    case 1:
        printf("Dona Maria\n");
        break;
    case 2:
        printf("Tia Daiana\n");
        break;
    case 3:
        printf("Seu Antônio\n");
        break;
    case 4:
        printf("NULO A eleição foi anulada!\n");
        break;
    default:
        printf("Empate técnico");
    }
}
