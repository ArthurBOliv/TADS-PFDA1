/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

/* Vari�veis de mem�ria [vari�veis globais] */

float    base, expoente, resultado;

/* CORPO DO PROGRAMA */

int main()
{
	inicio:
	printf("\n\nInsira a base: ");
	scanf("%f", &base);
	printf("\n\nInsira o expoente: ");
	scanf("%f", &expoente);
	resultado = pow(base, expoente);
	printf("\n\nResultado: %.2f", resultado);
	printf("\n\n\n\nPressione qualquer tecla para outra consulta");
	getch();
	goto inicio;
	
	return 0;
}
