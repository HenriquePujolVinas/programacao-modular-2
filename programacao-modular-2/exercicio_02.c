#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    int codigo = 0;
    int e = 0;
    int c = 0;
    int m = 0;
    int u = 0;
    int n = 0;
    int cont = 0;
    int i;
    int vetor[5];
    int comparacao;
    int indicevencedor;
    int indiceempate = 0;

    do
    {
        printf("Nos fale, qual foi seu nível de satisfação?\n1-Satisfeito\n2-Contente\n3-Meia-boca\n4-Uma droga\n5-Voto nulo\nDigite os números designados para votar.");
        printf("\n");
        scanf("%i",&codigo);
        switch(codigo)
        {
        case 1:
            e++;
            cont++;
            break;
        case 2:
            c++;
            cont++;
            break;
        case 3:
            m++;
            cont++;
            break;
        case 4:
            u++;
            cont++;
            break;
        case 5:
            n++;
            cont++;
        default:
            printf("Número invalido, remcomeçe.\n");
        }
    }
    while(cont != 15);

    for(i = 0; i <= 4; i++)
    {
        switch(i)
        {
        case 0:
            break;
        case 1:
            vetor[i] = e;
            break;
        case 2:
            vetor[i] = c;
            break;
        case 3:
            vetor[i] = m;
            break;
        case 4:
            vetor[i] = u;
        }
    }
    for(i = 0; i <= 4; i++)
    {
        if (i == 1)
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
    for(i = 1; i <= 4; i++)
    {
        if (comparacao == vetor[i] && i != indicevencedor)
        {
            indiceempate++;
        }
    }

    printf("A quantidade de votos foi a seguinte:\nSatisfeito: %i\nContente: %i\nMeia-boca: %i\nUma droga: %i\nVoto nulo: %i",e,c,m,u,n);
    printf("\n");
    if(indiceempate > 0)
    {
        printf("Houve um empate técnico! Mais de uma opção obteve %i votos.\n", comparacao);
    }
    if (comparacao > n)
    {
        switch(indicevencedor)
        {
        case 1:
            printf("Vencedor: Satisfeito\n");
            break;
        case 2:
            printf("Vencedor: Contente\n");
            break;
        case 3:
            printf("Vendecor: Meia-boca\n");
            break;
        case 4:
            printf("Vencedor: Uma droga\n");
        }
    }
    else
    {
        printf("Vencedor: Voto nulo\n");
    }
    printf("\nA quantidade e porcentagem de votos foi a seguinte:\n");
    printf("Satisfeito: %i (%.2f%%)\n", e, ((float)e / cont) * 100);
    printf("Contente: %i (%.2f%%)\n", c, ((float)c / cont) * 100);
    printf("Meia-boca: %i (%.2f%%)\n", m, ((float)m / cont) * 100);
    printf("Uma droga: %i (%.2f%%)\n", u, ((float)u / cont) * 100);
    printf("Voto nulo: %i (%.2f%%)\n", n, ((float)n / cont) * 100);
    printf("\n");
}
