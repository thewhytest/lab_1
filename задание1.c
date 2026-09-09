#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("прога");
	getchar();
	puts("запуск");
	return 0;
}
