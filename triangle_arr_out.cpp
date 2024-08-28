#include <stdio.h>
#include <assert.h>

#include "triangle_arr_out.h"

const size_t size_x = 7;
const size_t size_y = 5;

int triangle_arr_out (int *array, size_t x)
{
    assert(array);
    size_t count = 1;

    for(size_t i = 0; i < x; i++)
    {
        for(size_t j = 0; j < count; j++) printf("%d ", array[i * size_x + j]);
        count++;
    }

    count = 1;

    return 0;
}