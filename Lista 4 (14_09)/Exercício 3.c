#include <stdio.h>
#include <conio.h>
#include <locale.h>

int som,i,num;

int main()
{
	setlocale(LC_ALL,"");
	printf("Digite um número: ");
	fflush (stdin); scanf ("%i", &num);
    for ( i=1 ; i<=num ; i++)
    {
	  som=i+som;
	  printf("%i", i);
	if ( i<num)
	{printf(" + ");}
	else
	{printf(" = %i", som);}
	}
	
	getch();
	return 0;
}
