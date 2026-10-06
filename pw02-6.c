#include <stdio.h>
#include <stdint.h>

int main(void)
{
    unsigned int a;
    scanf("%d", &a);
    uint8_t b = a + 10u;
    printf("ADD: %u\n", b);
    b = a*2;
    printf("MUL2: %u\n", b);
    b = a*a;
    printf("SQR: %u\n", b);
    return 0;
}

/*Объясните, почему результаты
"сворачиваются" по модулю 256*/

/*UINT8_MAX = 255. Размер данного типа при арифметических операциях даёт модульную арифметику по модулю 256*/
