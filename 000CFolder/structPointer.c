#include <stdio.h>
#include <unistd.h>

struct dataSet
{
    char data1;
    int data2;
    char data3;
    short data4;
};

void displayMemberElements(struct dataSet *pData);

int main(){

    struct dataSet data;

    data.data1 = 0x11;
    data.data2 = 0xFFFFEEEE;
    data.data3 = 0x22;
    data.data4 = 0xABCD;

    displayMemberElements(&data);
    /*
    printf("Before: data.data1 = %d\n",data.data1); 

    struct dataSet *pData;

    pData = &data;
    pData->data1 = 0x55;

    printf("After: data.data1 = %d\n",data.data1); 
    */

    return(0);
}

void displayMemberElements(struct dataSet *pData)
{
    printf("data1 = %X\n",pData->data1);
    printf("data1 = %X\n",pData->data2);
    printf("data1 = %X\n",pData->data3);
    printf("data1 = %X\n",pData->data4);
}