#include <stdio.h>
#include "bit_manipulation.h"

int integer_output;
int binary_input[] = {1, 0, 0, 0};

int main()
{
    binary_integer(&integer_output, binary_input, sizeof(binary_input) / sizeof(binary_input[0]));

    printf("%d\n", integer_output);

    return 0;
}
