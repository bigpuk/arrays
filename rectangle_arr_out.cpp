#include <stdio.h>
#include <assert.h>

#include "rectangle_arr_out.h"

int square_arr_out(int *array, size_t x, size_t y)
{
    assert(array);

    for (size_t i = 0; i < y; i++)
    {
        for (size_t j = 0; j < x; j++)
        {
            printf("%d ", array[i * x + j]);
        }

        printf("\n");
    }

    return 0;
}