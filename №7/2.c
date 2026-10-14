#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	float x, y;
	char c;
	printf("Введите выражение: ");
	scanf("%f %c %f", &x, &c, &y);
	switch (c)
	{
	case '+':
		printf("=%.2f", x+y);
		break;
	case '-':
		printf("=%.2f", x - y);
		break;
	case '*':
		printf("=%.2f", x * y);
		break;
	case '/':
		printf("=%.2f", x / y);
		break;
	case '^':
		printf("=%.2f", pow(x,y));
		break;
	default:
		printf("Неизвестный оператор");
	}
	return 0;
}