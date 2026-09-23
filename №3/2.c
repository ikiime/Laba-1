#include <locale.h>
#include <stdio.h>	
#define      D_ENGLISH 2.54
#define      D_SPANISH 2.32166

int main()
{
	setlocale(LC_CTYPE, "RUS");
	int dym;
	float result_en, result_sp;
	puts("¬ведите значение:");
	scanf("%d", &dym);
	result_en = D_ENGLISH * dym;
	result_sp = D_SPANISH * dym;
	printf("%d дюймов Ц это %.1f см\n", dym, result_en);
	printf("%d pulgada = %.5f см", dym, result_sp);
	return 0;
}