#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");

    char str1[300];
    char str2[300];
    int i;
    int y;
    int cont;
    int tamanho1;
    int tamanho2;

    printf("Digite uma frase(SEM ACENTUAÇÃO):\n\n");
    gets(str1);
    tamanho1 = strlen(str1);

    printf("\nDigite uma palvara (SEM ACENTUAÇÃO) para verificar\nse ela se encontra na frase:\n\n");
    gets(str2);
    tamanho2 = strlen(str2);

    printf("Frase: %s\nPlavra: %s\n",str1, str2);


    for(i=0; i <= tamanho1 - 1; i++)
    {
        str1[i] = tolower(str1[i]);
    }
    for(i=0; i <= tamanho2 -1; i++)
    {
        str2[i] = tolower(str2[i]);
    }

    for(y = 0; y <= tamanho1 -1; y++)
    {
        if(cont == tamanho2)
        {
            break;
        }

        cont = 0;

        for(i = 0; i <= tamanho2 - 1; i++)
        {
            if(str2[i] == str1[y + i])
            {
                cont++;
            }
            else
            {
                break;
            }
        }
    }

    if(cont == tamanho2)
    {
        printf("Sim. A palvara digitada se encontra na frase.");
    }
    else
    {
        printf("Não. A palvara digitada não se encontra na frase.");
    }
}
