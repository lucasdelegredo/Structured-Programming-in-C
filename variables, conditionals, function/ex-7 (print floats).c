#include <stdio.h>
#include <stdlib.h>

void main()
{
   float valor;
   
   valor = 780;
   
   float primeiro;
   float segundo;
   float terceiro;
   
   primeiro = valor * 0.46;
   segundo = valor * 0.32;
   terceiro = valor - (primeiro + segundo);
   
   printf("Primeiro ganhador: R$ %.2f\n",primeiro);
   printf("Segundo ganhador: R$ %.2f\n",segundo);
   printf("Terceiro ganhador: R$ %.2f\n",terceiro);
   
}

