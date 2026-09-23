#include <locale.h>
#include <stdio.h>	

int main()
{
	setlocale(LC_CTYPE, "RUS");
	float a, b;
	float x, y, z;
	puts("¬ведите значение a и b:");
	scanf("%f %f", &a, &b);
	x = a * b;
	y = a + b;
	z = a - b;
	printf("-------------\n");
	printf("| %s | %s | %s |\n", "a*b", "a+b", "a-b");
	printf("-------------\n");
	printf("| %1.0f*%1.0f | %1.0f+%1.0f | %1.0f-%1.0f |\n", a, b, a, b, a, b);
	printf("-------------\n");
	printf("|  %1.f |  %1.f  |  %1.f |\n", x, y, z);
	return 0;
}