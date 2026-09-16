#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int n = 4; //вариант 3
	int L = 337;
	int k = 5;
	int m = 3;
	printf("	%d\n", n);
	printf("	%d\n", L);
	printf("%+07.3f", n / (L*1.));
}