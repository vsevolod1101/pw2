#include <stdio.h>
#include <stdint.h>

int main(void)
{
    printf(
        "INT8: size=%zu min=%d max=%d values=%u\n"
        "UINT8: size=%zu min=0 max=%u values=%u\n"
        "INT16: size=%zu min=%d max=%d values=%u\n"
        "UINT16: size=%zu min=0 max=%u values=%u\n"
        "UINT32: size=%zu min=%d max=%d values=%llu\n"
        "UINT32: size=%zu min=0 max=%u values=%llu\n",
        sizeof(int8_t), INT8_MIN, INT8_MAX, UINT8_MAX + 1u,
        sizeof(uint8_t), UINT8_MAX, UINT8_MAX + 1u,
        sizeof(int16_t), INT16_MIN, INT16_MAX, UINT16_MAX + 1u,
        sizeof(uint16_t), UINT16_MAX, UINT16_MAX + 1u,
        sizeof(int32_t), INT32_MIN, INT32_MAX, (unsigned long long)UINT32_MAX + 1llu,
        sizeof(uint32_t), UINT32_MAX, (unsigned long long)UINT32_MAX + 1llu
    );
    return 0;
}
/*Поясните, почему знаковый и без знаковые типы
одинакового размера имеют одинаковое количество различных значений и чем
при этом отличается распределение их диапазонов.*/

/*U-тип имеет диапазон целых значений от 0 до n. Всего n + 1, включая 0.
знаковый тип той же разрядности имеет диапазон значений от -(n+1)/2 до (n+1)/2-1. Всего ((n+1)/2-1) - (-(n+1)/2) + 1, включая 0.
n + 1 всегда четно из-за разрядности.
Докажем, что их модули равны. |n - 0| = |((n+1)/2-1) - (-(n+1)/2)| <-> n = n*/