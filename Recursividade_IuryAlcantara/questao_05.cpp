#include <stdio.h>

int potencia1 (int exp1, char base1)
{
	int i;
	char aux[100];
	if(exp1 > 0)
	{
		for(i = 0; i < exp1; i++)
		{
			aux[i] = base1;
			return aux[i];
		}
	}
}
int potencia2 (int exp2, char base2)
{
	int i;
	char aux[100];
	if(exp2 > 0)
	{
		for(i = 0; i < exp2; i++)
		{
			aux[i] = base2;
			return aux[i];
		}
	}
}

int main()
{
	
  	int i, exp1, exp2;
  	char base1 = 'a'; char base2 = 'b';

  	printf("Digite o exp1: ");
  	scanf("%d",&exp1);
  	
  	printf("Digite o exp2: ");
  	scanf("%d",&exp2);
 
 	for(i = 0; i < exp1; i++)
 	{
 	    printf("%c", potencia1(exp1, base1));
    }
    
 	for(i = 0; i < exp1; i++)
    {
 	 	printf("%c", potencia2(exp2, base2));
    }
 
 }
