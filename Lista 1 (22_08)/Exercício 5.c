/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

/* Vari�veis de mem�ria [vari�veis globais] */

float    bruto, bruto2, liq, prev, ir;

/* CORPO DO PROGRAMA */

int main()
{
	inicio:
	setlocale(LC_ALL, "portuguese");
	printf("\n\nInsira o sal�rio bruto: ");
	scanf("%f", &bruto);
	prev = bruto / 100 * 8.5;
	bruto2 = bruto - prev;
	ir = bruto2 / 100 * 27.5;
	liq = bruto2 - ir;
	printf("\n\nSal�rio l�quido: R$ %.2f", liq);
	printf("\nPrevid�ncia: R$ %.2f", prev);
	printf("\nImposto de renda: R$ %.2f", ir);
	printf("\n\nPressione qualquer tecla para outra consulta");
	getch();
	goto inicio;
	
	return 0;
}
