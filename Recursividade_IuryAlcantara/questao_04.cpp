#include <stdio.h>
#include <stdlib.h>

int mdc(int primeiro, int segundo)
{
  if(segundo == 0)
  return (primeiro);
  else
      return mdc(segundo, primeiro % segundo);
}

int main()
{
  
 int a, b;
 printf("Digite o primeiro número natural: ");
 scanf("%d",&a);
 printf("Digite o segundo número natural : ");
 scanf("%d",&b);
  
 printf("Primeiro número: %d\nSeugndo número: %d\nMDC: %d \n", a, b, mdc(a, b));
}
