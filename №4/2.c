#include <locale.h>
#include <stdio.h>	
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int a = 11;
	int b = 3;
	//int x;
	//float y;
	//double z;
	//x = a / b;
	//y = a / b;
	//z = a / b;
	//printf("x = %d\n", x);
	//printf("y = %1.2f\n", y);
	//printf("z = %1.2lf\n", z);
	printf("(int)(a / b) = %d\n", (int)(a / b));
	printf("(float)(a / b) = %1.2f\n", (float)(a / b));
	printf("(double)(a / b) = %1.2lf\n", (double)(a / b));
	return 0;
}