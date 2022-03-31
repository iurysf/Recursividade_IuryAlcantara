#include <stdio.h>

int potencia(int base, int expoente)
{
  if(expoente == 0)
  return (1);
  else
      return (base * potencia(base, expoente-1));
}
void main()
{
  
 int b, exp;
 printf("Digite a base: ");
 scanf("%d",&b);
 printf("Digite o expoente : ");
 scanf("%d",&exp);
  
 printf("Base: %d\nExpoente: %d\nPotencia: %d \n", b, exp, potencia(b, exp));
}
