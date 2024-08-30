#include <stdio.h>
#include <assert.h>

#include "input_triangle.h"

void input_triangle(FILE *arrinput, int *array, size_t x)
{
    assert(arrinput);
    assert(array);

    for(size_t i = 0; i < x * x; i++)
    {
        fscanf(arrinput, "%d", &array[i]);
    }
}