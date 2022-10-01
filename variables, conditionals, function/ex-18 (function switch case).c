#include <stdio.h>
#include <stdlib.h>

float operacao(float n1, float n2, char simb){
    switch(simb){
        case '+':
            return(n1+n2);
            break;
        case '-':
            return(n1-n2);
            break;
        case '/':
            return(n1/n2);
            break;
        case '*':
            return(n1*n2);
            break;
    }
}

void main()
{
    float n1;
    float n2;
    char simb;

    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf(" %c",&simb);

    printf("%f",operacao(n1,n2,simb));
}
