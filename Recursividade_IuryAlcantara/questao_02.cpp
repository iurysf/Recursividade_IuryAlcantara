/*Quest�o 02
Implemente uma rotina recursiva que liste os 10 primeiros elementos de
Sequ�ncia de Fibonacci. Como dica, use a seguinte l�gica:
N = n�mero de elementos
Se N = 1 ou N = 2 retorna 1
Se N > 2 retorna Fibonacci(N-1) + Fibonacci(N-2)
Sequ�ncia de Fibonacci � a sequ�ncia num�rica proposta pelo matem�tico
Leonardo Pisa. A proposta � que cada termo subsequente corresponde � soma
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
