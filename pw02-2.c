#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    bool a = x;
    bool b = y;
    printf(
        "MODULE_READY: %d\n"
        "FAULT_STATE: %d\n"
        "BOOL_SIZE: %d\n"
        "FLAGS_SUM: %d\n",
        a,
        b,
        sizeof(bool),
        a+b
    );
    return 0;
}
/*Объясните, почему любое ненулевое входное значение превращается в 1*/

/*Приведение к типу bool даёт данный результат*/