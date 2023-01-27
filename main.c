#include <stdio.h>
#include <stdlib.h>
//Faça um programa em C que receba pelo teclado a idade de 20 pessoas. Apresentar na tela a quantidade de pessoas com idade > 18 anos.

void main()
{
	int n, c, acum;
	acum=0;
	
	for (c=1; c<=20; c++)	
	{
		printf("\n Digite sua idade: ");
		scanf("%d",&n);
		
		if(n>18)
		acum= acum+1;
	}

	printf("\n\n a quantidade de pessoas maiores de 18 anos e %d", acum);
	
}
