#include <stdio.h>
#include <stdint.h>

// The memory of union will be 4 btes because both of them represent 4 bytes variables.

union Packet{
    
    uint32_t packetValue;
    struct
    {
        uint32_t crc :2;
        uint32_t status : 1;
        uint32_t payload :12;
        uint32_t bat :3;
        uint32_t sensor :3;
        uint32_t longAddr :8;
        uint32_t shortAddr :2;
        uint32_t addrMode :1;
    } packetFields;   
};
// That's so genious usage of union and struct and I explained why in my notes. You can check unions/bit extraction.
int main()
{
    union Packet packet;
    printf("Enter the 32 bit packed value:");
    scanf("%x",&packet.packetValue);

    printf("decode = %#x\n",packet.packetFields.crc);
    printf("decode = %#x\n",packet.packetFields.status);
    printf("decode = %#x\n",packet.packetFields.payload);
    printf("decode = %#x\n",packet.packetFields.bat);
    printf("decode = %#x\n",packet.packetFields.sensor);
    printf("decode = %#x\n",packet.packetFields.longAddr);
    printf("decode = %#x\n",packet.packetFields.shortAddr);
    printf("decode = %#x\n",packet.packetFields.addrMode);

    return(0);
}