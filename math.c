void binary_add(int* in_b, int size_in_b, int* out_b, int size_out_b, int* add_bin)
{
    for (int i = size_in_b - 1; i > 0; i--)
    {
        out_b[i] += in_b[i] + add_bin[i];

        if (out_b[i] == 3) {
            out_b[i] -= 2;
            out_b[i - 1]++;
        }
        else if (out_b[i] == 2) {
            out_b[i] = 0;
            out_b[i - 1]++;
        }
    }
}
