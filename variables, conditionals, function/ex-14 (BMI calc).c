#include <stdio.h>
#include <stdlib.h>

void main()
{

    float altura;
    float peso;
    float imc;

    scanf("%f",&altura);
    scanf("%f",&peso);

    imc = peso / (altura*altura);

    if(imc>40){
        printf("Seu IMC eh: %.2f\n",imc);
        printf("A Classificacao eh: Obesidade Grau III!");
    }else if(imc<=39.9 && imc>=35){
        printf("Seu IMC eh: %.2f\n",imc);
        printf("A Classificacao eh: Obesidade Grau II!");
    }else if(imc<=34.9 && imc>=30){
        printf("Seu IMC eh: %.2f\n",imc);
        printf("A Classificacao eh: Obesidade Grau I!");
    }else if(imc<=29.9 && imc>=25){
        printf("Seu IMC eh: %.2f\n",imc);
        printf("A Classificacao eh: Sobrepeso!");
    }else if(imc<=24.9 && imc>=18.6){
        printf("Seu IMC eh: %.2f\n",imc);
        printf("A Classificacao eh: Normal!");
    }else if(imc<18.5){
        printf("Seu IMC eh: %.2f\n",imc);
        printf("A Classificacao eh: Abaixo do Normal!");
    }


}



