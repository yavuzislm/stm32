#include <stdio.h>
#include <stdint.h>

union address
{
    uint16_t shortaddr;
    uint32_t longaddr;
};


int main(){

    union address addr;

    addr.shortaddr = 0xABCD;
    addr.longaddr = 0xEEEECCCC;

    printf("short adress: %X\n",addr.shortaddr);
    printf("long adress: %X\n",addr.longaddr);

    return(0);
}