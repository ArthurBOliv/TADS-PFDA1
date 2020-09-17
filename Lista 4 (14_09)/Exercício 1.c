#include <stdio.h>
#include <conio.h>
#include <locale.h>

int num;

int main ()
{
	num=0;
    setlocale(LC_ALL, "");
    system("cls");
    printf ("eis todos os múltiplos de 3 de 0 à 100: ");
    do
    {num=num+3;
	printf ("%i\n", num);}
    while (num+3<100);
	getch();
	return 0;
}
