#include <stdio.h>
#include <stdint.h>

struct carModel
{
    uint32_t carNumber;
    uint32_t carPrice;
    uint16_t carMaxSpeed;
    float carWeight;
};

int main(){
    
    struct carModel carBMW = {2021,15000,220,1330};
    printf("Sizeof of struct carModel is %u\n", sizeof(struct carModel));
    return(0);
}
