/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Vari�veis de mem�ria [vari�veis globais] */

float    raio, altura, volume;

/* CORPO DO PROGRAMA */

int main()
{
	inicio:
	setlocale(LC_ALL, "portuguese");
	printf("\n\nCalcular o volume da lata de �leo");
	printf("\n\nRaio da lata em cm: ");
	scanf("%f", &raio);
	printf("\nAltura da lata em cm: ");
	scanf("%f", &altura);
	volume = 3.14159 * (raio * raio) * altura;
	printf("\n\nVolume da lata: %.2f mL", volume);
	printf("\n\n\n\nPressione qualquer tecla para outra consulta");
	getch();
	goto inicio;
	
	return 0;
}
