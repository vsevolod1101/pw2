#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int id;
    int status_i;
    float voltage;
    scanf("%x %o %f", &id, &status_i, &voltage);
    uint8_t status = status_i;
    uint16_t checksum = id + status;
    printf(
        "PACKET_ID: %d\n"
        "STATUS_CODE: %d\n"
        "STATUS_CHAR: %c\n"
        "VOLTAGE: %.2f\n"
        "CHECKSUM: %d\n",
        id,
        status,
        status,
        voltage,
        checksum
    );
    return 0;
}

