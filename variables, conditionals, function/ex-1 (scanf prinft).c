#include <stdio.h>
#include <stdlib.h>

void main()
{
    int alunos;
    int alunas;

    scanf("%i",&alunos);
    scanf("%i",&alunas);

    int total_alunos;
    
    total_alunos = alunos + alunas;
    
    printf("Alunos: %i\n",alunos);
    printf("Alunas: %i\n",alunas);
    printf("Total: %i\n",total_alunos);
}
