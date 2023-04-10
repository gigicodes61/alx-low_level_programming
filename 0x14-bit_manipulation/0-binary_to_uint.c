#include <stdio.h>
#include "main.h"

unsigned int binary_to_uint(const char *b)
{
    unsigned int z;
    int x;

    if (b == NULL)
        return (0);
    for (x = 0; b[x] != '\0'; x++)
    {
        if (b[x] != '0' && b[x] != '1')
            return (0);

                    z <<= 1;
        if ( b[x] == '1')
            z++;
    }
    return (z);
}
