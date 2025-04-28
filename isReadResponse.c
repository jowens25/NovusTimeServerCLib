

#include "ntslib.h"
//
bool isReadResponse(char *message)
{
    if (strncmp("$RR", message, 3) == 0)
    {
        return true;
    }

    return false;
}