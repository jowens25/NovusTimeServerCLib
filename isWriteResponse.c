

#include "ntslib.h"
//
bool isWriteResponse(char *message)
{
    if (strncmp("$WR", message, 3) == 0)
    {
        return true;
    }

    return false;
}