#include <stdio.h>
#include <stdlib.h>

void main()
{

    int num;

    scanf("%i",&num);

    if(num==0){
        printf("Numero NEUTRO!");
    }
    else if(num%2==0){
        printf("Numero PAR!");
    }
    else{
        printf("Numero IMPAR!");
    }
}



