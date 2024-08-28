#include <stdio.h>
#include <assert.h>

#include "input.h"
#include "input_check.h"

void input (FILE *arrinput, int *array, size_t x, size_t y)
{
    assert(arrinput);

    for(size_t i = 0; i < x * y; i++)
    {
        fscanf(arrinput, "%d", &array[i]);
    }
}