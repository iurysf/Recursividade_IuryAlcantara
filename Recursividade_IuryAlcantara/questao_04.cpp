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
 printf("Digite o primeiro n�mero natural: ");
 scanf("%d",&a);
 printf("Digite o segundo n�mero natural : ");
 scanf("%d",&b);
  
 printf("Primeiro n�mero: %d\nSeugndo n�mero: %d\nMDC: %d \n", a, b, mdc(a, b));
}
