/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Vari�veis de mem�ria [vari�veis globais] */

int n;
char a, b, c, d, opcao;
int tentativas = 3;

/* CORPO DO PROGRAMA */

int main()
{
	setlocale(LC_ALL, "portuguese");
	inicio:
	printf("\n\nDigite a senha: ");
	a = getch();
	printf("*");
	b = getch();
	printf("*");
	c = getch();
	printf("*");
	d = getch();
	printf("*");
	
	if(a == '1' && b == '3' && c == '1' && d == '0')
	{
	system("cls");
	printf("\n\n====================");
	printf("\n    a = saldo 	    ");
	printf("\n   b = dep�sito     ");
	printf("\n  c = pagamentos    ");
	printf("\n d = transfer�ncias ");
	printf("\n    e = sair        ");
	printf("\n====================");
	opcao:
	opcao = getch();
	
	
	switch (opcao)
	{
		case 'a' : printf("\n\nOpera��o: saldo");
		break;
		case 'b' : printf("\n\nOpera��o: dep�sito");
		break;
		case 'c' : printf("\n\nOpera��o: pagamentos");
		break;
		case 'd' : printf("\n\nOpera��o: transfer�ncias");
		break;
		case 'e' : printf("\n\nEncerrando opera��es");
		break;
		default : printf("\n\nOp��o inv�lida!");
		goto opcao;
		break;
	}
}
	else{
		printf("\n\nSenha incorreta");
		goto inicio;
	}
	
	getch();
	
	return 0;
}

