#include <stdio.h>

#include "array_sum.h"

int array_sum(int *array1, int *array2, int *res, size_t x, size_t y)
{
    for(size_t i = 0; i < y; i++)
        for(size_t j = 0; j < x; j++)
        {
            res[i] = array1[i] + array2[i];
        }
}