#include <stdio.h>
#include <assert.h>

#include "input_rectangle.h"

void input_rectangle(FILE *arrinput, int *array, size_t x, size_t y)
{
    assert(arrinput);
    assert(array);

    for(size_t i = 0; i < x * y; i++)
    {
        fscanf(arrinput, "%d", &array[i]);
    }
}