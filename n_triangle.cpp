#include <stdio.h>

#include "n_triangle.h"

int n_triangle(size_t x)
{
    size_t n = 0;
    
    for(size_t i = 1; i <= x; i++)
    {
        n += i;
    }

    return n;
}