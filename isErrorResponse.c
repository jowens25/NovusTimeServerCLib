
#include "ntslib.h"
//
bool isErrorResponse(char *message)
{
    if (strncmp("$ER", message, 3) == 0)
    {
        return true;
    }

    return false;
}