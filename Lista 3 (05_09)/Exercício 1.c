/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Vari�veis de mem�ria [vari�veis globais] */

int cont;
float base, area, altura;

/* CORPO DO PROGRAMA */

int main()
{
	
	setlocale (LC_ALL, "portuguese");
	/*iniciando as vari�veis e contador em 0*/
	cont=0;
	base=0;
	altura=0;
	/*area=0;*/
	do {    /*Bloco de comandos a serem executados enquanto a condi��o do la�o n�o for satisfeita*/
		printf("\nBase: ");
		fflush(stdin);
		scanf("%f", &base);
		printf("\nAltura: ");
		fflush(stdin);
		scanf("%f", &altura);
		if(base==0 || altura==0){
			printf("\nImposs�vel calcular a �rea! Tente novamente!\n");
		}
		else{
			area=base*altura/2;
			printf("\nO valor da �rea �: %.2f\n", area);
		}
		cont++; /*Contador sendo incrementado por itera��o do la�o, ou seja, a cada volta seu valor aumenta em 1*/
	}
	while(cont<3); /*Condi��o de parada do la�o de repeti��o*/
	system ("pause");
}
