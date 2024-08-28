#include <stdio.h>
#include <assert.h>

#include "print.h"

void print(int *array, size_t x, size_t y)
{
    assert(array);

    for (size_t i = 0; i < x; i++)
    {
        for (size_t j = 0; j < y; j++)
        {
            printf("%d ", array[i * 5 + j]);
        }

        printf("\n");
    }
}