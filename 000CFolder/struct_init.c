//You can define the structure inside or outside of the main function.
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
    struct carModel carFord = {4031,35000,160,1900.96};
    //Remember that, there is a connection between struct type and the variables bracet. This method called
    //C89 method. You need to watch the order.
    struct carModel carHonda = {.carWeight = 90.90};
    //Here is order is not impotant you can define the variables in order which you want.
    //This method called C99. Putting . before variables name is so important.

    printf("Details of car BMW is as follows \n");
    printf("carNumber = %u\n", carBMW.carNumber);
    printf("carPrice = %u\n", carBMW.carPrice);
    printf("carMaxSpeed = %u\n", carBMW.carMaxSpeed);
    printf("carWeight = %f\n", carBMW.carWeight);

    //if you want to change the structures value you can directly change it in code block.
    carFord.carWeight = 1400.61;
    printf("carWeight = %f\n", carFord.carWeight);
    return(0);
}
