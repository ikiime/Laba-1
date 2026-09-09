#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS"); // для переключения русской кодировки
	puts("Моя программа"); // вывод строки
	getchar(); // задержка экрана
	puts("Продолжение программы");
	return 0;
}