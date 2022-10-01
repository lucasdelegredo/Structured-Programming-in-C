#include <stdio.h>
#include <stdlib.h>

void main()
{

    float lado_a;
    float lado_b;
    float lado_c;

    scanf("%f",&lado_a);
    scanf("%f",&lado_b);
    scanf("%f",&lado_c);

    if(lado_a<=0 || lado_b<=0 || lado_c<=0){
        printf("Entrada INVALIDA!");
    }
    else if(lado_a==lado_b && lado_a==lado_c){
        printf("Triangulo EQUILATERO!");
    }else if(lado_a==lado_b || lado_a==lado_c || lado_b==lado_c){
        printf("Triangulo ISOSCELES!");
    }
    else{
        printf("Triangulo ESCALENO!");
    }
}



