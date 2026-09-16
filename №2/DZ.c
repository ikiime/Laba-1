#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_CTYPE, "RUS");
    int sofa = 10;      
    int suitcase = 12;  
    int trunk = 5;      
    int basket = 3;     
    int box = 4;        
    int dog = 6;        
    int N = 300;  
    int V = 400;  
    int M_bag = 20;
    int M_hand = 5;
    int bagage_total = sofa + suitcase + trunk + basket + box;
    int X = 0;
    if (bagage_total > M_bag) 
    {
        X = bagage_total - M_bag;
    }
    int Y = 0;
    if (dog > M_hand) 
    {
        Y = dog - M_hand;
    }
    int S = X * N + Y * V;

    printf("Вес багажа: %d кг\n", bagage_total);
    printf("Лишний багаж: %d кг\n", X);
    printf("Лишняя ручная кладь: %d кг\n", Y);
    printf("Доплатить всего: %d руб\n", S);

    return 0;
}
