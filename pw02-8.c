#include <stdio.h>
#include <float.h>

int main(void)
{
    printf(
        "FLOAT: size=%zu, digits=%zu, max=%e\n"
        "DOUBLE: size=%zu, digits=%zu, max=%e\n"
        "LDOUBLE: size=%zu, digits=%zu, max=%Le\n",
        sizeof(float), FLT_DIG, FLT_MAX,
        sizeof(double), DBL_DIG, DBL_MAX,
        sizeof(long double), LDBL_DIG, LDBL_MAX
    );
    return 0;
}
/*Количество цифр показателя степени в выводе может отличаться в
зависимости от системы, а на некоторых платформах long double может
совпадать по размеру с double.*/