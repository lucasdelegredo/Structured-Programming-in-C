#include <stdio.h>
#include <stdlib.h>

void main()
{
    int alunos;
    int alunas;

    scanf("%i",&alunas);
    scanf("%i",&alunos);

    if(alunos>alunas)
    {
        printf("Quantidade de alunos eh maior do que de alunas!");
    }
    else if(alunos<alunas){
        printf("Quantidade de alunas eh maior do que de alunos!");
    }else if(alunos = alunas){
        printf("Mesma quantidade!");
    }

}
