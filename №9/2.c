#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    while (1) {
        printf("Число: ");

        int x = 0, Last = 0, y = 0, w = 0, r = 0, q = 0, i = 0;
        long long prod = 1;
        int n = 0;                     
        int first = 0, second = 0, prev = -1, last = 0, penult = 0;
        int sumAll = 0, sumFirstHalf = 0;
        int sumEvenPos = 0, sumOddPos = 0; 
        int sameMsg = 0;               

        int ch;
        while ((ch = getchar()) == '\n' || ch == ' ');

        // читаем цифры одну за другой
        while (ch >= '0' && ch <= '9') {
            int d = ch - '0'; n++;

            if (d == 3) x++;
            if (d % 2 == 0) y++;
            if (d > 5) w++;
            if (d % 2) r += d;
            if (d >= 7) q += d;
            if (d) prod *= d;
            sumAll += d;

            // первая и вторая цифры
            if (n == 1) first = d;
            if (n == 2) second = d;

            // одинаковые рядом
            if (n > 1 && d == prev) {
                if (!sameMsg) { printf("10) одинаковые рядом:"); sameMsg = 1; }
                printf(" %d%d", prev, d);
            }

            // разряды от начала
            if (n % 2) sumOddPos += d; else sumEvenPos += d;

            // запоминаем последнюю и предпоследнюю
            penult = last;
            last = d;

            prev = d;
            ch = getchar();
        }

        printf("1) цифр 3: %d\n", x);
        printf("2) последняя %d встречается %d раз\n", last, Last); 
        printf("3) чётных: %d\n", y);
        printf("4) >5: %d\n", w);
        printf("5) сумма нечётных: %d\n", r);
        printf("6) сумма >=7: %d\n", q);
        printf("7) произведение без 0: %lld\n", prod);
        if (n >= 2) printf("8) предпоследняя*вторая: %d\n", penult * second);
        printf("9) сумма чётных кроме последней: %d\n", i);
        if (!sameMsg) printf("10) одинаковых рядом нет\n");
        else printf("\n");

       
        if (n % 2 == 0)
            printf("12) произв. сумм разрядов: %d\n", sumEvenPos * sumOddPos);
        else
            printf("12) произв. сумм разрядов: %d\n", sumEvenPos * sumOddPos); 

        printf("Продолжить? (y/n): ");
        char a;
        while ((a = getchar()) == '\n' || a == ' ');
        if (a == 'n' || a == 'N') break;
        while ((ch = getchar()) != '\n' && ch != EOF);
    }
    return 0;
}