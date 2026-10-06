#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf(
        "INT_MIN: %d\n"
        "INT_MAX: %d\n"
        "UINT_MAX: %u\n"
        "RANGE_OK: %d\n",
        INT_MIN,
        INT_MAX,
        UINT_MAX,
        (unsigned int)INT_MAX * 2u + 1u == UINT_MAX
    );
    return 0;
}
/*В комментарии объясните, почему для этой
проверки необходимо приведение к без знаковому типу.*/

/*Сравнивать можно однотипные данные*/