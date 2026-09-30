#include <locale.h>
#include <stdio.h>	
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int n;
	printf("Введите трехзначное число: ");
	scanf("%d", &n);
	int last = n % 10; 
	int first = n / 100;
	int middle = (n / 10) % 10; 
	int sum = first + middle + last;
	int reverse = last * 100  + middle * 10 + first;
	printf("Последняя цифра %d, первая цифра %d, сумма цифр %d, число наоборот %d\n", last, first, sum, reverse);
	return 0;
}