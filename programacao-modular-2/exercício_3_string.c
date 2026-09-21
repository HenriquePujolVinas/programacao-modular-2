#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

main()
{
    setlocale(LC_ALL,"");

    char str1[300];
    char str2[300];
    char str3[300];
    int i;
    int j = 0;
    int cont = 0;
    int tamanho;
    int tamanho2;

    printf("Escreva uma frase ou uma palavra (SEM ACENTUAÇÃO), e verifique se ela é um palindormo.\n");
    gets(str1);
    printf("Valor digitado: %s\n\n",str1);
    tamanho = strlen(str1);


    for(i = 0; i <= (tamanho - 1); i++)
    {
        if(str1[i] != ' ' && str1[i] != ',' && str1[i] != '.' && str1[i] != '-' && str1[i] != '!' && str1[i] != ':' && str1[i] != '?' && str1[i] != ';')
        {
            str2[j] = tolower(str1[i]);
            j++;
        }
    }

    str2[j] = '\0';
    tamanho2 = strlen(str2);
    i = 0;

    for(j = (tamanho2 - 1) ; j >= 0; j--)
    {
        str3[i] = str2[j];
        i++;
    }

    str3[i] = '\0';
    j = 0;

    for(i = 0; i < tamanho2; i++)
    {
        if(str2[i] == str3[i])
        {
            cont++;
        }
    }

    printf("%s\n",str2);
    printf("%s\n\n",str3);

    if(cont == tamanho2 && tamanho2 > 0)
    {
        printf("A frase ou palavra escrita É UM PALÍNDROMO!\n");
    }
    else
    {
        printf("A frase ou palavra NÃO é um palíndromo.\n");
    }
}
