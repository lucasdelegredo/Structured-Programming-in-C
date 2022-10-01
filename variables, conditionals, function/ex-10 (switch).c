#include <stdio.h>
#include <stdlib.h>

void main()
{
    int dia_semana;

    scanf("%i",&dia_semana);

    if(dia_semana>7){
        printf("Numero Invalido!");
    }
    else{
        switch(dia_semana){
            case 1:
                printf("Domingo!");
                break;
            case 2:
                printf("Segunda-feira!");
                break;
            case 3:
                printf("Terca-feira!");
                break;
            case 4:
                printf("Quarta-feira!");
                break;
            case 5:
                printf("Quinta-feira!");
                break;
            case 6:
                printf("Sexta-feira!");
                break;
            case 7:
                printf("Sabado!");
                break;
        }
    }
}

