void shift_l (int* in_buff, int size_in_buff, int* out_buff, int size_out_buff, int shift_amount)
{
    for (int i = 0; i < (size_in_buff - shift_amount); i++) {
        out_buff[i] = in_buff[i + shift_amount];
    }
    for (int i = size_in_buff - shift_amount; i < size_in_buff; i++)
    {
        out_buff[i] = 0;
    }
}

void shift_r (int* in_buff, int size_in_buff, int* out_buff, int size_out_buff, int shift_amount)
{
}

#include <stdio.h>
int main()
{
    int in[8] = {0, 0, 0, 0, 0, 1, 0, 1};
    int out[8];

    shift_l(in, sizeof(in) / sizeof(in[0]), out, sizeof(out) / sizeof(out[0]), 4);

    for (int i = 0; i < sizeof(in) / sizeof(in[0]); i++) {
        printf("%d", in[i]);
    }
    printf("\n");

    for (int i = 0; i < sizeof(out) / sizeof(out[0]); i++) {
        printf("%d", out[i]);
    }
    printf("\n");
}
