/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Vari�veis de mem�ria [vari�veis globais] */

float altura, pesoh, pesom;
char sexo;

/* CORPO DO PROGRAMA */

int main()
{
	setlocale(LC_ALL, "portuguese");
	printf("Insira sua altura: ");
	scanf("%f", &altura);
	printf("\n\nDigite 1 para homem e 2 para mulher");
	sexo = getche();
	pesoh = 72.7 * altura - 58;
	pesom = 62.1 * altura - 44.7;
	switch (sexo)
	{
		case '1' : printf("\n\nPeso ideal: %.2f kg", pesoh);
		break;
		case '2' : printf("\n\nPeso ideal: %.2f kg", pesom);
		break;
		default : printf("\n\nTecla inv�lida");
		break;
	}
	
	getch();
	
	return 0;
}
