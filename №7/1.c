#include <locale.h>
#include <stdio.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	char c;
	printf("Введите символы 'a' or 'b' or '1': ");
	scanf_s("%c", &c);

	switch (c)
	{
	case 'a':
		printf("Это буква\n");
		break;
	case 'b':
		printf("Это буква\n");
		break;
	default:
		printf("Это цифра\n");
	}
	return 0;
}