#include <stdio.h>
#include <stdlib.h>

float calcular_c(float temp) {
    // incluir aqui a sua solução
    float temp_celsius;
    temp_celsius =(temp - 32.0)*(5.0/9.0);
    return(temp_celsius);
}

void main()
{
    float temp;

    scanf("%f",&temp);

    printf("%f",calcular_c(temp));
}
