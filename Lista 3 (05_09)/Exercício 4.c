/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variáveis de memória [variáveis globais] */

	char original [11] = "iron maiden"; /*Vetor contendo a senha original*/
	char senha [11]; /*Vetor que carrega os caracteres digitados pelo usuário*/
	int contf, contw;

/* CORPO DO PROGRAMA */

int main()
{
	setlocale(LC_ALL, "portuguese");
	contw=3; /*iniciando o contador do laço while em 3 para que o mesmo possa ser diminuido a cada volta do laço*/
	while(contw>=0){
		inicio:
		fflush(stdin);	
		printf("\nDigite a senha: ");
		for(contf=0; contf<11; contf++){  /*Laço de repetição para carregar o vetor senha com os dados inseridos pelo usuário*/
			senha[contf]=getch(); /*A cada espaço do vetor a aplicação aguarda entrada do teclado para preencher o espaço e continuar a execução*/
			putchar('*'); /*Ao capturar o caracter inserido e o armazenar no vetor, a aplicação imprime um asterisco na tela*/
		}
	if(contw==0){ /*Verificação para encerrar a aplicação com texto personalizado quando chegar na condição de parada contw=0*/
		printf("\nNúmero máximo de tentativas atingido! Encerrando a aplicação...\n");
		return 0;
	}	
	if(strcmp(original, senha)==0){ /*Comparação do vetor contendo a senha original com o vetor senha para permitir ou não o acesso*/
		printf("\nAcesso Vip!\n");
		system("pause");
		return 0;
	}
	else{
		printf("\nBARRADO NA ENTRADA! Tente novamente! %d tentativas restantes\n", contw);
	}
	contw--;
	}
	getch();
	system("pause");
	return 0;
}
