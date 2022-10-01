#include <stdio.h>
#include <stdlib.h>

void main()
{
    int option;

    scanf("%i",&option);

    if(option>4){
        printf("Numero Invalido!");
    }
    else{
        float num_1;
        float num_2;

        scanf("%f",&num_1);
        scanf("%f",&num_2);



        float resultado;

        switch(option){
            case 1:
                resultado = num_1 + num_2;
                printf("O resultado da soma eh: %.f",resultado);
                break;
            case 2:
                resultado = num_1 - num_2;
                printf("O resultado da subtracao eh: %.f",resultado);
                break;
            case 3:
                resultado = num_1 / num_2;
                printf("O resultado da divisao eh: %f",resultado);
                break;
            case 4:
                resultado = num_1 * num_2;
                printf("O resultado da multiplicacao eh: %.f",resultado);
                break;
        }
    }
}

