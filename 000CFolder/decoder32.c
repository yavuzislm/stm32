// Write a program to decode a given 32 bit packed information and print the valuespf different fields.
//Create a structure with member elements as packet fields as shown below.

#include <stdio.h>
#include <stdint.h>

struct Packet{

    uint8_t crc;
    uint8_t status;
    uint16_t payload;
    uint8_t bat;
    uint8_t sensor;
    uint8_t longAddr;
    uint8_t shortAddr;
    uint8_t addrMode;
};
/*
you can also define it like this. This leads to use less memory than normal.
struct Packet{
    uint32_t crc :2;
    uint32_t status : 1;
    uint32_t payload :12;
    uint32_t bat :3;
    uint32_t sensor :3;
    uint32_t longAddr :8;
    uint32_t shortAddr :2;
    uint32_t addrMode :1;
}
*/
int main(){

    struct Packet decode;

    uint32_t packetValue;
    printf("Enter the 32 bit packed value:");
    scanf("%x",&packetValue);

    decode.crc = (uint8_t) (packetValue & 0x3);
    decode.status = (uint8_t) ((packetValue >> 2) & 0x1);
    decode.payload = (uint16_t) ((packetValue >> 3) & 0xFFF); //It is FFF because we have 12 bits.
    decode.bat = (uint8_t) ((packetValue >> 15) & 0x7);
    decode.sensor = (uint8_t) ((packetValue >> 18) & 0x7);
    decode.longAddr = (uint8_t) ((packetValue >> 21) & 0xFF);
    decode.shortAddr = (uint8_t) ((packetValue >> 29) & 0x3);
    decode.addrMode = (uint8_t) ((packetValue >> 31) & 0x1);

    printf("decode = %#x\n",decode.crc);
    printf("decode = %#x\n",decode.status);
    printf("decode = %#x\n",decode.payload);
    printf("decode = %#x\n",decode.bat);
    printf("decode = %#x\n",decode.sensor);
    printf("decode = %#x\n",decode.longAddr);
    printf("decode = %#x\n",decode.shortAddr);
    printf("decode = %#x\n",decode.addrMode);
    
    printf("Size of the struct is %u\n", sizeof(decode));

    // ChatGpt gave this answer.
    // The total size of the structure would be 9 bytes. However, the size reported by sizeof(decode) might
    // not always match your expectation due to potential padding added by the compiler for alignment purposes.
    return(0);
}