//#include <stdio.h>
//#include <stdlib.h>
//
//#define ROW 9
//#define COL 9
//
//void main()
//{
//    int row, col;
//    printf("\n");
//    for (row = 1; row <= ROW; ++row)
//    {
//        for (col = 1; col <= COL; col++)
//            printf("%5d", col * row);
//        printf("\n");
//    }
//    system("pause");
//} 1.1

//#include <stdio.h>
//#include <stdlib.h>
//
//#define ROW 9
//#define COL 9
//
//void main()
//{
//    int row, col;
//    printf("\n");
//    for (row = 1; row <= ROW; ++row)
//    {
//        for (col = 1; col <= row; col++)   /* было: col <= COL */
//            printf("%5d", col * row);
//        printf("\n");
//    }
//    system("pause");
//} 1.2

#include <stdio.h>
#include <stdlib.h>

#define N 5

void main()
{
    int row, col;
    printf("\n");
    for (row = 1; row <= N; ++row)
    {
        for (col = 1; col <= row; col++)
            printf("%-3d", row * 10);
        printf("\n");
    }
    system("pause");
} //1.3