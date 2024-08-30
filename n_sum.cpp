#include <stdio.h>

#include "n_sum.h"

int n_sum(int *array, int n)
{
    int sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        sum  += array[i];
    }

    return sum;
}