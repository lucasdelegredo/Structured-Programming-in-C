#include <stdio.h>
#include <stdlib.h>

void ano_bissexto(int ano){

    if(ano%4==0 && ano%100!=0){
        printf("Eh Ano Bissexto!");
    }else if(ano%4==0 && ano%100==0 && ano%400==0){
        printf("Eh Ano Bissexto!");
    }else{
        printf("Nao Eh Ano Bissexto!");
    }
    
}
    
void main()
{

    int ano;

    scanf("%i",&ano);

    ano_bissexto(ano);
}




