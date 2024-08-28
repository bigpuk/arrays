#include <stdio.h>
#include <malloc.h>
#include <assert.h>

#include "print.h"
#include "triangle_arr_out.h"
#include "input.h"
#include "input_check.h"

int main ()
{   
    FILE *arrinput = fopen("array_in.txt", "r");

    assert(arrinput);

    size_t x, y;

    fscanf(arrinput, "%u", &x);
    fscanf(arrinput, "%u", &y);

    int *array = (int *)calloc(x * y, sizeof(int));

    if(!array)
    {
        printf("Out of memory!");
        return 1;
    }

    input(arrinput, array, x, y);

    printf("\nArray size:  x = %u, y = %u \n \n", x, y);
    print(array, x, y);

    fclose(arrinput);
    free(array);
}