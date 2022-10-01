#include <stdio.h>
#include <stdlib.h>

void main()
{
    float base_a;
    float altura_a;

    float base_b;
    float altura_b;

    scanf("%f",&base_a);
    scanf("%f",&altura_a);

    scanf("%f",&base_b);
    scanf("%f",&altura_b);

    if(base_a==altura_a || base_b==altura_b){
        printf("Os dados informados nao formam o retangulo A ou o retangulo B!");
    }
    else{
        float area_a;
        float area_b;
        area_a = base_a * altura_a;
        area_b = base_b * altura_b;

        printf("A area do retangulo A eh: %f\n",area_a);
        printf("A area do retangulo B eh: %f\n",area_b);

        //verificar as areas
        if(area_a>area_b){
            printf("A area do retangulo A eh maior do que a do retangulo B!");
        }
        else if(area_b>area_a){
            printf("A area do retangulo B eh maior do que a do retangulo A!");
        }
        else if(area_a==area_b){
            printf("A area do retangulo A eh igual ao do retangulo B!");
        }
    }
}

