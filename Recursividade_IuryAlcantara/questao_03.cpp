/*Questão 03
Implemente uma rotina recursiva para inverter uma dada palavra. Como dica,
use a seguinte lógica:
n = tamanho(palavra)
Se n = 1 Então retorne palavra
Senão retorne Inverte(Substring(palavra, 2, n)) + substring (palavra, 1,1)
Exemplo: CASA
n = 4
Substring(‘casa’, 2, n) = asa
Substring(‘casa’, 1,1 ) = c
*/


#include<stdio.h>
#include<string.h>

char inverter_palavras(char str[],int n)
{
  if(n==1)
  {
    return str[0];
  }
  else
  {
    return str[n-1];
  }
}

int main()
{
  char string[100];
  int tam, i;

  printf("Digite uma palavra para inverter:");
  scanf("%s",string);
  tam=strlen(string);
  
  printf("Palavra digitada: %s\n", &string);
  
  printf("Palavra invertida: ");
  for(i=0;i<tam;tam--)
  {
    printf("%c",inverter_palavras(string,tam));
  }

  return 0;
}
