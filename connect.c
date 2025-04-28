#include "ntslib.h"
//
int connect(void)
{
    perror("connect called");

    char connectCommand[] = "$CC*00\r\n";
    char writeData[32] = {0};
    char readData[32] = {0};

    printf("write data array: %s\n", writeData);

    int ser = serOpen("/dev/ttyUSB0");
    if (ser == -1)
    {
        close(ser);
        perror("Error opening serial port");
        return -1;
    }

    strcpy(writeData, connectCommand);

    int err = serWrite(ser, writeData, strlen(writeData));
    usleep(1000); //

    if (err != 0)
    {
        perror("serWrite error");
        return -1;
    }

    err = serRead(ser, readData, sizeof(readData));
    if (err != 0)
    {
        perror("serRead error");
        return -1;
    }

    close(ser);

    if (isChecksumCorrect(readData) != 0)
    {
        perror("connect check sum wrong");
        return -1;
    }

    perror("Connect");

    return 0;
}