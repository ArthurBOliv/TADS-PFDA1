#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int	base, limite, casas;
int	soma = 0;


int main(){
	setlocale (LC_ALL, "portuguese");
		
	base = 0;
	system ("cls");

	printf ("\nEscreva quantas casas do tabuleiro serão preenchidas (máximo de 16, que é 1/4): ");
	fflush (stdin);
	scanf ("%i", &casas);
	
	if (casas <=16) {
	
	for (limite = 0; limite < casas; limite++)
	{
		base = base * 2;
		if (base == 0)
		{
			base++;
		}
		soma = soma + base;
	}	


	printf ("\n\nO monge receberá: %lu", soma); }
	
	else printf("\n\nnumero de casas inválido");
	
	getch();
	return (0);
}
