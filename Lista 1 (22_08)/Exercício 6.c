/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

/* Vari�veis de mem�ria [vari�veis globais] */

float    antigo, reajustado1, reajustado2;

/* CORPO DO PROGRAMA */

int main()
{
	inicio:
	setlocale(LC_ALL, "portuguese");
	printf("\n\nSal�rio antigo: ");
	scanf("%f", &antigo);
	reajustado1 = antigo + (antigo / 4);
	reajustado2 = antigo - (antigo / 4);
	printf("\n\nSal�rio reajustado pra cima: %.2f", reajustado1);
	printf("\nSal�rio reajustado pra baixo: %.2f", reajustado2);
	printf("\n\nPressione qualquer tecla para outra consulta");
	getch();
	goto inicio;
	
	return 0;
}
