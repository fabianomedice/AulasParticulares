#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main ()
{
//declarar variaveis
float A;
float B;
float C;

//receber os valores
printf("Entre com o numero A:");
scanf ("%f",&A);
printf("Entre com o nummero B:");
scanf ("%f",&B);
printf ("Entre com o numero C:");
scanf ("%f",&C);

//condiçoes

if (A+B>C)
{
      printf("C MENOR QUE A+B");
}
else if (A+B<C)
{
      printf("C MAIOR QUE A+B");
}
system("pause");
return 0;

}
