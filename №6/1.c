#include <locale.h>
#include <stdio.h>	

int main(void)
{
    setlocale(LC_CTYPE, "RUS");
    int yeas;
    printf("¬ведите год : ");
    scanf_s("%d", &yeas);
    if ((yeas % 4 == 0) || (yeas == 400) && (yeas != 100))  {
        printf("%d високосный", yeas);
    }
    else {
        printf("%d не високосный", yeas); //1
    }
    return 0;
}