#ifndef BITMAN_H
#define BITMAN_H

// TRANSLATIONS

/**
 * @brief Translates unsigned decimal to binary.
 * @param out_b Output array of binary digits.
 * @param size_out_b Length of output array.
 * @param dec Decimal number being translated to binary.
 */
void dec_bin(int* out_b, int size_out_b, int dec);

// WARN: incomplete
void bin_hex();

// WARN: incomplete
void hex_bin();

// WARN: incomplete
void bin_dec();

// BITWISE

/**
 * @brief Shifts bits in input n amount of spaces left.
 * @param in_b Input array of bits to be shifted.
 * @param size_in_b Length of input array, n.
 * @param out_b Output array of binary digits.
 * @param size_out_b Length of output array.
 * @param shift_amount n-number of spaces bits are shifted to the left.
 * @return 0 upon success, -1 upon size correlation failure, 1 upon failure.
 */
int shift_l(int* in_b, int size_in_b, int* out_b, int size_out_b, int shift_amount);

/**
 * @brief Shifts bits in input n amount of spaces right.
 * @param in_b Input array of bits to be shifted.
 * @param size_in_b Length of input array.
 * @param out_b Output array of bits.
 * @param size_out_b Length of output array.
 * @param shift_amount n-number of spaces bits are shifted to the right.
 * @return 0 upon success, -1 upon size correlation failure, 1 upon failure.
 */
int shift_r(int* in_b, int size_in_b, int* out_b, int size_out_b, int shift_amount);

/**
 * @brief Flips all the bits in input array.
 * @param in_b Input array of bits to be flipped.
 * @param size_in_b Length of input array.
 * @param out_b Output array of flipped bits.
 * @param size_out_b Length of output array.
 * @return 0 upon success, -1 upon size correlation failure, 1 upon failure.
 */
int NOT(int* in_b, int size_in_b, int* out_b, int size_out_b);

/**
 * @brief The AND operator outputs a value if both inputs are that value; for index i, if input1[i] equals input2[i], output[i] = either of the inputs. Else, otuput[i] = 0.
 * @param in1_b Array input one.
 * @param size_in1_b Length of array input one.
 * @param in2_b Array input two.
 * @param size_in2_b Length of array input two.
 * @param out_b Output array of bits after AND operation on in1_b and in2_b.
 * @param size_out_b Length of output array.
 */
int AND(int* in1_b, int size_in1_b, int* in2_b, int size_in2_b, int* out_b, int size_out_b);

/**
 * @brief The OR operator outputs 1 if either inputs are one; for index i, if input1[i] or input2[i] equals 1, output[i] = 1. Else, otuput[i] = 0.
 * @param in1_b Array input one.
 * @param size_in1_b Length of array input one.
 * @param in2_b Array input two.
 * @param size_in2_b Length of array input two.
 * @param out_b Output array of bits after OR operation on in1_b and in2_b.
 * @param size_out_b Length of output array.
 */
int OR(int* in1_b, int size_in1_b, int* in2_b, int size_in2_b, int* out_b, int size_out_b);

/**
 * @brief The XOR operator outputs 1 if either inputs are one and if inputs are not equal to eachother; for index i, if input1[i] or input2[i] equals 1 and input1[i] does not equal input2[i], output[i] = 1. Else, otuput[i] = 0.
 * @param in1_b Array input one.
 * @param size_in1_b Length of array input one.
 * @param in2_b Array input two.
 * @param size_in2_b Length of array input two.
 * @param out_b Output array of bits after XOR operation on in1_b and in2_b.
 * @param size_out_b Length of output array.
 */
int XOR(int* in1_b, int size_in1_b, int* in2_b, int size_in2_b, int* out_b, int size_out_b);

// MATH

/**
 * @brief Adds binary array add_bin to binary array in_b; out_b = in_b + add_bin
 * @param in_b Input array of bits.
 * @param size_in_b Length of input array.
 * @param out_b Output array of bits.
 * @param size_out_b Length of output array.
 * @param add_bin Array of bits of a binary number to be added to input.
 * @return 0 upon success, -1 upon size correlation failure, 1 upon failure.
 */
int bin_add(int* in_b, int size_in_b, int* out_b, int size_out_b, int* add_bin);

// WARN: incomplete
/**
 * @brief Subtracts binary array in_b by binary array sub_bin; out_b = in_b - sub_bin
 * @param in_b Input array of bits.
 * @param size_in_b Length of input array.
 * @param out_b Output array of bits.
 * @param size_out_b Length of output array.
 * @param sub_bin Array of bits in_b is being subtracted by.
 * @return 0 upon success, -1 upon size correlation failure, 1 upon failure.
 */
int bin_subtract(int* in_b, int size_in_b, int* out_b, int size_out_b, int* sub_bin);

#endif // BITMAN_H
