
#include "ntslib.h"
//
unsigned char calculateChecksum(char *data)
{
    unsigned char checksum = 0;
    for (int i = 1; i < strlen(data); i++)
    {
        if ('*' == data[i])
        {
            break;
        }
        checksum = checksum ^ data[i];
    }

    return checksum;
}