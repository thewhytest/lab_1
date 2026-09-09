#include <stdio.h>
#include <locale.h>
void name()
{
	setlocale(LC_CTYPE, "RUS");
	puts(" * * * * * * * * * * * * * * * * * * * * * * ");
	puts(" *                                         * ");
	puts(" * тема: Разработка консольного приложения * ");
	puts(" *                                         * ");
	puts(" *     Выполнил: Фирсов Н. Н.              * ");
	puts(" *                                         * ");
	puts(" * * * * * * * * * * * * * * * * * * * * * * ");
}
void date()
{ 
	puts("01. 02. 08");
	puts(" _     _  _   _  _ ");
	puts("| ||  | | _| | ||_|");
	puts("|_||. |_||_. |_||_|");
}
int main()
{
	setlocale(LC_CTYPE, "RUS");

	name();
	date();

	return 0;
}