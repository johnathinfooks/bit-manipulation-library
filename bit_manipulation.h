#ifndef BIT_MANIPULATION_H
#define BIT_MANIPULATION_H



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
 * @param size_in_b Length of input array, n.
 * @param out_b Output array of binary digits.
 * @param size_out_b Length of output array.
 * @param shift_amount n-number of spaces bits are shifted to the right.
 */
void shift_r(int* in_b, int size_in_b, int* out_b, int size_out_b, int shift_amount);

// WARN: incomplete
void inverse();



#endif // BIT_MANIPULATION_H
