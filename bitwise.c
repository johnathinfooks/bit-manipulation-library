void shift_l (int* in_buff, int size_in_buff, int* out_buff, int size_out_buff, int shift_amount)
{
    for (int i = 0; i < (size_in_buff - shift_amount); i++) {
        out_buff[i] = in_buff[i + shift_amount];
    }
    for (int i = size_in_buff - shift_amount; i < size_in_buff; i++) {
        out_buff[i] = 0;
    }
}

void shift_r (int* in_buff, int size_in_buff, int* out_buff, int size_out_buff, int shift_amount)
{
    for (int i = size_in_buff; i > shift_amount; i--) {
        out_buff[i] = in_buff[i - shift_amount];
    }
    for (int i = 0; i < shift_amount; i++) {
        out_buff[i] = 0;
    }
}
