#include <stdio.h>
#include <assert.h>

#include "torn_arr_out.h"
#include "n_sum.h"

int torn_arr_out (int *array, size_t x, int *sizes)
{
    assert(array);
    
    for(size_t i = 0; i < x; i++)
    {
        for(int j = 0; j < sizes[i]; j++)
        {
            printf("%d ", array[n_sum(sizes, i) + j]);
        }

        printf("\n");
    }

    return 0;
}