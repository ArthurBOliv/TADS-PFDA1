/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variáveis de memória [variáveis globais] */

int cont, num, res;

/* CORPO DO PROGRAMA */

int main()
{
	setlocale(LC_ALL, "portuguese");

	cont=0;
	printf("\nInsira um número: ");
	scanf("%d", &num);
	do{ /*Bloco a ser executado*/
		res=num*cont;
		printf("\n%d vezes %d é igual a: %d\n", num, cont, res);
		cont++;
		
	}
	while(cont<=10); /*Condição de parada*/
	system("pause");
}
