/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

/* Variáveis de memória [variáveis globais] */

int    nasc, atual, dias, meses, semanas, idade;

/* CORPO DO PROGRAMA */

int main()
{
	inicio:
	printf("\n\nAno de nascimento: ");
	scanf("%i", &nasc);
	printf("Ano atual: ");
	scanf("%i", &atual);
	idade = atual - nasc;
	dias = idade * 365;
	semanas = dias / 7;
	meses = dias / 30;
	printf("\n\nIdade: %i anos", idade);
	printf("\n%i meses", meses);
	printf("\n%i semanas", semanas);
	printf("\n%i dias", dias);
	printf("\n\nPressione qualquer tecla para outra consulta");
	getch();
	goto inicio;
	
	return 0;
}
