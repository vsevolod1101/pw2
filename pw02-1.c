#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %x %o", &a, &b, &c);
    printf(
        "UNIT_ID: %d\n"
        "UNIT_VERSION: %d\n"
        "UNIT_STATUS: %d\n"
        "SUM: %d\n",
        a,
        b,
        c,
        a+b+c
    );
    return 0;
}