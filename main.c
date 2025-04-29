

#include "ntslib.h"

int main()
{
    perror("main called");
    // int32_t addr = 0xb0020000;
    int32_t tempData = 0x00000001;
    //$RC,0xb0020000*25
    connect();

    // readRegister(addr, &tempData);
    //
    // writeRegister(addr, &tempData);
    //
    // readRegister(addr, &tempData);

    // writeRegister(addr, &tempData);
    //   char connnectResponse[] = "$CR*11\r\n";
    //
    //   char message[] = "$RC,0xb002000c*76";
    //// print(connectCommand);
    //
    // char buff[17] = {0}; // 16 bytes + null terminator
    // char checksum = calculateChecksum(message);
    // char out[32] = {0};
    //
    // sprintf(out, "%02x", checksum);
    // strcat(out, "$CC");
    // print(out);

    // Write command

    // Wait for a response

    // Read response
    // memset(buff, 0, sizeof(buff)); // Clear buffer

    return 0;
}

void print(char data[])
{
    printf("%s\n", data);
}