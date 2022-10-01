#include <stdio.h>
#include <stdlib.h>

void main()
{
    int sony;
    int dell;
    int toshiba;

    scanf("%i",&sony);
    scanf("%i",&dell);
    scanf("%i",&toshiba);


    int total_notebook;
    total_notebook = sony + dell + toshiba;

    printf("%i notebook(s) da Sony\n",sony);
    printf("%i notebook(s) da Dell\n",dell);
    printf("%i notebook(s) da Toshiba\n",toshiba);
    printf("Total de %i notebooks\n",total_notebook);
}