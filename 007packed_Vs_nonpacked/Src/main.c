#include <stdint.h>
#include <stdio.h>

struct dataSet
{
	char data1;
	int data2;
	char data3;
	short data4;
}__attribute__((packed));

int main(void)
{
	struct dataSet data;
	// DO NOT FORGET TO DEFINE STRUCT.

	data.data1 = 0xAA;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x55;
	data.data4 = 0xA5A5;

	printf("data.data1 = %d\n",data.data1);
	printf("data.data2 = %d\n",data.data2);
	printf("data.data3 = %d\n",data.data3);
	printf("data.data4 = %d\n",data.data4);

}