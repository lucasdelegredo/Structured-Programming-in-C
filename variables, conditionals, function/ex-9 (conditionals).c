#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void main()
{
    int num_1;
    int num_2;

    scanf("%i",&num_1);
    scanf("%i",&num_2);

    if(num_1==num_2){
        printf("Numeros iguais!");
    }
    else if(num_1>num_2){
        printf("O %i eh o maior numero!",num_1);
    }
    else{
        printf("O %i eh o maior numero!",num_2);
    }

}

