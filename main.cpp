#include <stdio.h>
#include <malloc.h>
#include <assert.h>

#include "rectangle_arr_out.h"
#include "triangle_arr_out.h"
#include "input_rectangle.h"
#include "torn_arr_out.h"
#include "input_triangle.h"
#include "input_torn.h"

int main ()
{   
    printf("Select array type:\n1)rectangle\n2)triangle\n3)torn\n");

    int arr_type;

    scanf("%d", &arr_type);

    FILE *arrinput = fopen("array_in.txt", "r");

    assert(arrinput);

    size_t x, y;

    if(arr_type == 1)
    {
        fscanf(arrinput, "%u", &y);
        fscanf(arrinput, "%u", &x);
    }
    else if(arr_type == 2 || arr_type == 3) fscanf(arrinput, "%u", &x);

    int *array = (int *)calloc(x * y, sizeof(int));//todo подгон тоько под х когда треугольный или
    int *sizes = (int *)calloc(x, sizeof(int));
    
    if(!array || !sizes)
    {
        printf("Out of memory!");

        return 1;
    }

    if(arr_type == 1) 
    {
        input_rectangle(arrinput, array, x, y);
        printf("\nArray size:  x = %u, y = %u \n \n", x, y);
    }
        else if(arr_type == 2)
        {
            input_triangle(arrinput, array, x);
            printf("\nArray size:  x = %u \n \n", x);
        }
            else if(arr_type == 3)
            {
                input_torn(arrinput, array, x, sizes);
                printf("\nArray size:  x = %u \n \n", x);
            }

    if(arr_type == 1) square_arr_out(array, x, y);
        else if(arr_type == 2) triangle_arr_out(array, x);
            else if(arr_type == 3) torn_arr_out(array, x, sizes);


    fclose(arrinput);
    free(array);
}