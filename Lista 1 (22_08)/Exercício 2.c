/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Vari�veis de mem�ria [vari�veis globais] */

float    numero, dobro, quadrado;

/* CORPO DO PROGRAMA */

int main()
{
	inicio:
	printf("\n\nCalcular dobro e quadrado de:");
	scanf("%f", &numero);
	dobro = 2 * numero;
	quadrado = numero * numero;
	printf("\n\nDobro: %.2f", dobro);
	printf("\nQuadrado: %.2f", quadrado);
	printf("\n\n\n\nPressione qualquer tecla para outra consulta");
	getch();
	goto inicio;
	
	return 0;
}
