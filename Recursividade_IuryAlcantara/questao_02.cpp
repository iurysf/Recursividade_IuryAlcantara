/*Questão 02
Implemente uma rotina recursiva que liste os 10 primeiros elementos de
Sequência de Fibonacci. Como dica, use a seguinte lógica:
N = número de elementos
Se N = 1 ou N = 2 retorna 1
Se N > 2 retorna Fibonacci(N-1) + Fibonacci(N-2)
Sequência de Fibonacci é a sequência numérica proposta pelo matemático
Leonardo Pisa. A proposta é que cada termo subsequente corresponde à soma
dos dois anteriores. Exemplo: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89.
*/

#include <stdio.h>

int fibonacci(int n)
{
  if(n == 1 || n == 2)
    return(1);
  else if(n > 2)
    return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main(void) 
{
  int quant;
  for(quant = 1; quant < 11; quant++)
  (
    printf("Sequencia de Fibonacci: %d\n", fibonacci(quant))
  );
  return 0;
}
