#include <iostream>

/**
 *
 * 0 - OFF
 * 1 - ON
 *
 * BINARY WORKS WITH BASE 2 ONLY
 *
 * 256 128 64 32 16 8 4 2 1
 *
 * 339 IN BINARY
 *
 * 339 - 256 = 83
 *
 * 83 - 64 = 19
 *
 * 19 - 16 = 3
 *
 * 3 - 2 = 1
 *
 * 1 - 1 = 0
 *
 * 101010011
 *
 * COUTNING IN BINARY
 *
 * 0 = 0
 * 1 = 1
 * 2 = 10 : 2 + 0
 * 3 = 11 : 2 + 1
 * 4 = 100  4 + 0 + 0
 * 5 = 101 : 4 + 1
 * 7  = 111 : + 4 + 2 + 1
 * 8 = 1000 : 8 + 0 + 0 + 0
 * 9 = 1001 : 8 + 0 + 0 + 1
 * 10 = 1010 = 8 + 0 + 2 + 0
 *
 * BITWISE OPERATORS
 *
 * & - AND
 * | - OR
 * ^ - XOR
 * << - left shift
 * >> - right shift
 */

int bitwise_and(int x, int y)
{
    // 256 128 64 32 16 8 4 2 1

    x = 6;     // 6 in binary  00000110
    y = 12;    // 12 in binary 00001100
    int z = 0; //          00000100

    // For the bitwise AND to work the column for each variable must have matchings 1 to assign a 1 for the answer, else its 0.
    z = x & y; // Answer is 4
}

int bitwise_or(int x, int y)
{
    x = 6;     // 6 in binary  00000110
    y = 12;    // 12 in binary 00001100
    int z = 0; //          00001110

    // In bitwise OR only 1 variable has to have a 1 in the column for the answer to be assigned a 1.

    z = x | y; // Answer is 14
}

int bitwise_exclusive_or(int x, int y)
{
    x = 6;     // 6 in binary  00000110
    y = 12;    // 12 in binary 00001100
    int z = 0; //          00001010

    // In bitwise EXCLUSIVE OR only 1 bit can be 1 for the answer to be assigned the 1.

    z = x ^ y; // Answer is 10
}

int bitwise_left_shift(int x, int y)
{
    x = 6;     // 6 in binary  00000110
    y = 12;    // 12 in binary 00001100
    int z = 0; //          00001010

    // In bitwise LEFT SHIFT you move the bits by a certain number of spaces to the left.
    // Every time you left shift you increase the number by 2 *  
    z = x << 1; // Answer is 12
}

int bitwise_right_shift(int x, int y)
{
    x = 6;     // 6 in binary  00000110
    y = 12;    // 12 in binary 00001100
    int z = 0; //          00000011

    // In bitwise RIGHT SHIFT you move the bits by a certain number of spaces to the right.
    // Every time you left shift you decrease the number by 2 *  
    

    z = x >> 1; // Answer is 3
}

int bitwise_not(int x, int y)
{
    x = 6;     // 6 in binary  00000110
    y = 12;    // 12 in binary 00001100
    int z = 0; //          00000011

    // In bitwise NOT every bit is inverted.

    z = ~x; // A
}

int main()
{
    int x = 6;  // 6 in binary  00000110
    int y = 12; // 12 in binary 00001100
    int z = 0;  //              00000100
     
    return 0;
}