// integer to binary translation
void integer_binary(int* output_buff, int output_buff_size, int input)
{
    int rem;

    for (int i = output_buff_size - 1; i >= 0; i--)
    {
        rem = input % 2;
        input /= 2;
        output_buff[i] = rem;
    }
}

// binary to integer translation
void binary_integer(int* output_buff, int* input_buff, int input_buff_size)
{
    for (int i = input_buff_size - 1; i >= 0; i--)
    {
        if (input_buff[i] == 1) {
            // NOTE: Dont really want bit shifting operators in a bit shifting library :p
            *output_buff |= 1 << (input_buff_size - 1 - i);
        }
    }
}

// binary to hexadecimal translation
void binary_hexadecimal(int* output_buff, int output_buff_size, int* input_buff, int input_buff_size)
{
    // Look at the buffer.
    // step through the first 4 digits of the buffer array
    // evaluate the numerical value of those 4 digits between 0 and 15 (base 16)
    // assign a hexadecimal "bit" value depending on
}

// TODO: add bitwise operator functions and implement them instead of using the features of the language.
