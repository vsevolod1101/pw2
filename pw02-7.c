#include <stdio.h>

int main(void)
{
    long double a;
    scanf("%Lf", &a);
    double b = a;
    float c = a;
    printf(
        "FLOAT: %.6f\n"
        "DOUBLE: %.6f\n"
        "LDOUBLE: %.6Lf\n"
        "FLOAT+1: %.6f\n"
        "DOUBLE+1: %.6f\n"
        "LDOUBLE+1: %.6Lf\n",
        c,
        b,
        a,
        c + (float)1,
        b + (double)1,
        a + (long double)1

    );
    return 0;
}
/*Поясните, почему прибавление единицы "не видно" у float, но видно у
double и long double, опираясь на примерное количество значащих цифр
каждого типа.*/

/*Десятичная мантиса типов ограничена конкретным гарантированным значением.
У float 6. У double 15. У long double 18.
Входные данные имеют 9 значащих десятичных цифр -> float может некорректно обрабатывать младшие разряды.*/
