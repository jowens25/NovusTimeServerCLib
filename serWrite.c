#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include "ntslib.h" // writes n bytes where n is the str len of the input
int serWrite(int ser, char data[], size_t dataLength)
{
    int numWrote = write(ser, data, dataLength);
    if (numWrote <= 0)
    {
        perror("serial write error");
        return -1;
    }
    printf("Read %d bytes: %s\n", numWrote, data);
    return 0;
}