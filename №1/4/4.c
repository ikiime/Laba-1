#include <stdio.h>
#include <locale.h>

void name()
{
    puts("* * * * * * * * * * * * * * * * * * * * * *");
    puts("*                                         *");
    puts("* Тема: Разработка консольного приложения *");// здесь код создания рамки и названием работы и ФИО исполнителя
    puts("*                                         *");
    puts("*     Выполнил Иванов И.И.                *");
    puts("*                                         *");
    puts("* * * * * * * * * * * * * * * * * * * * * *");
}

void date()
{
    puts(" 2  1 . 1 2 . 2 0 0 7  ");
    puts(" _         _    _   _   _  __");
    puts("  |  |  |   |    | | | | |  /");
    puts(" /_  |  |  /_   /_ |_| |_| / ");
}

int main()
{
    setlocale(LC_CTYPE, "RUS");

    name();
    date();

    return 0;
}