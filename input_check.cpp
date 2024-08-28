#include <stdio.h>

#include "input_check.h"

int input_check ()
{
    if(getchar() != '\n') return 1;
    else return 0;
}