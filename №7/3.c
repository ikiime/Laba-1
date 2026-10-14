#include <stdio.h>
#include <locale.h>
int Y(int g, int a)
{
	return g % 10;
}

int main()
{
	setlocale(LC_CTYPE, "RUS");
	int g,a;
	printf("¬ведите денежную единицу(от 1 до 99): ");
	scanf_s("%d", &g);
	int x = Y(g,a);
	if (g >= 5 && g <= 20)
		printf("%d копеек", g);
		else if (x == 1)
			printf("%d копейка", g);
			else if (x >= 2 && x <= 4)
				printf("%d копейки",g);
				else
					printf("%d копеек", g);

	return 0;
}


//#include <stdio.h>
//#include <locale.h>
//
//int main()
//{
//	setlocale(LC_CTYPE, "RUS");
//	int g;
//	printf("¬ведите денежную единицу(от 1 до 99): ");
//	scanf_s("%d", &g);
//	int a = g % 10;
//	if (g >= 5 && g <= 20)
//		printf("%d копеек", g);
//	else if (a == 1)
//		printf("%d копейка", g);
//	else 
//		printf("%d копейки", g);
//
//	return 0;
//}

