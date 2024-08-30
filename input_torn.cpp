#include <stdio.h>
#include <assert.h>

#include "input_torn.h"
#include "n_sum.h"

void input_torn(FILE *arrinput, int *array, size_t x, int *sizes)
{
    assert(arrinput);
    assert(array);
    assert(sizes);

    for(size_t i = 0; i < x; i++)
    {
        fscanf(arrinput, "%d", &sizes[i]);
    }

    for(size_t i = 0; i < x; i++)
        for(int j = 0; j < sizes[i]; j++)
        {
            fscanf(arrinput, "%d ", &array[n_sum(sizes, i) + j]);
        }
}