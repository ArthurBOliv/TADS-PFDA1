/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Vari�veis de mem�ria [vari�veis globais] */

int cont, num, res;

/* CORPO DO PROGRAMA */

int main()
{
	setlocale(LC_ALL, "portuguese");

	cont=0;
	printf("\nInsira um n�mero: ");
	scanf("%d", &num);
	do{ /*Bloco a ser executado*/
		res=num*cont;
		printf("\n%d vezes %d � igual a: %d\n", num, cont, res);
		cont++;
		
	}
	while(cont<=10); /*Condi��o de parada*/
	system("pause");
}
