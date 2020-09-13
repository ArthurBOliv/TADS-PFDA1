/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variáveis de memória [variáveis globais] */

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
	printf("\n   b = depósito     ");
	printf("\n  c = pagamentos    ");
	printf("\n d = transferências ");
	printf("\n    e = sair        ");
	printf("\n====================");
	opcao:
	opcao = getch();
	
	
	switch (opcao)
	{
		case 'a' : printf("\n\nOperação: saldo");
		break;
		case 'b' : printf("\n\nOperação: depósito");
		break;
		case 'c' : printf("\n\nOperação: pagamentos");
		break;
		case 'd' : printf("\n\nOperação: transferências");
		break;
		case 'e' : printf("\n\nEncerrando operações");
		break;
		default : printf("\n\nOpção inválida!");
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

