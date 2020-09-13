/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

/* Variáveis de memória [variáveis globais] */

float    celsius, farenheit;

/* CORPO DO PROGRAMA */

int main()
{
	inicio:
	printf("\n\n\nInsira a temperatura em graus Celsius: ");
	scanf("%f", &celsius);
	farenheit = (celsius * 1.8) + 32;
	printf("\n\nTemperatura em graus Farenheit: %.2f", farenheit);
	printf("\n\n\n\nPressione qualquer tecla para outra consulta");
	getch();
	goto inicio;
	
	return 0;
}
