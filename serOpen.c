#include "ntslib.h"

int serOpen(char fileDescriptor[])
{
    int fd = open(fileDescriptor, O_RDWR | O_NOCTTY | O_SYNC);
    if (fd < 0)
    {
        perror("open");
        return -1;
    }

    setupTermios(fd);

    return fd;
}