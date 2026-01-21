#ifndef BITMAN_H
#define BITMAN_H

// TRANSLATIONS

/**
 * @brief Translates unsigned decimal to binary.
 * @param out_b Output array of binary digits.
 * @param size_out_b Length of output array.
 * @param dec Decimal number being translated to binary.
 */
void decimal_binary(int* out_b, int size_out_b, int dec);

// WARN: incomplete
void binary_hexadecimal();

// WARN: incomplete
void hexadecimal_binary();

// WARN: incomplete
void binary_decimal();

// BITWISE

/**
 * @brief Shifts bits in input n amount of spaces left.
 * @param in_b Input array of bits to be shifted.
 * @param size_in_b Length of input array, n.
 * @param out_b Output array of binary digits.
 * @param size_out_b Length of output array.
 * @param shift_amount n-number of spaces bits are shifted to the left.
 */
void shift_l(int* in_b, int size_in_b, int* out_b, int size_out_b, int shift_amount);

/**
 * @breif Shifts bits in input n amount of spaces right.
 * @param in_b Input array of bits to be shifted.
 * @param size_in_b Length of input array.
 * @param out_b Output array of bits.
 * @param size_out_b Length of output array.
 * @param shift_amount n-number of spaces bits are shifted to the right.
 */
void shift_r(int* in_b, int size_in_b, int* out_b, int size_out_b, int shift_amount);

// WARN: incomplete
void inverse();

// MATH

/**
 * @brief Adds binary array add_bin to binary array in_b; out_b = in_b + add_bin
 * @param in_b Input array of bits.
 * @param size_in_b Length of input array.
 * @param out_b Output array of bits.
 * @param size_out_b Length of output array.
 * @param add_bin Array of bits of a binary number to be added to input.
 */
void binary_add(int* in_b, int size_in_b, int* out_b, int size_out_b, int* add_bin);

#endif // BITMAN_H
