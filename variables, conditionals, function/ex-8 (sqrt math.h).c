#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void main()
{
   float a;
   float b;

   scanf("%f",&a);
   scanf("%f",&b);

   float hip;
   hip = sqrt((a*a) + (b*b));

   printf("A hipotenusa eh: %f",hip);
}

