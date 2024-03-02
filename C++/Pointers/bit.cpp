#include <iostream>
#include <string>
/**
 *  @note Different units of storage in a computer
 *
 *  Bit - Smallest unit of data, and can be 0 or 1
 *
 *  Byte - A group of 8 bits, and represents the smallest amount of text
 *
 *  Kilobyte - 1,024 bytes, can be represented as smaller amounts of text
 *
 *  Megabyte - 1,024 kilobytes or 1,048,576 bytes. Usually corresponds to file size, and programs, etc
 *
 *  Gigabyte - 1,024 Megabytes, or 1,073,741,824 bytes. Usually measured for SSD, or HDD
 *
 *  Terabyte -1,024 Gigabytes or 1,099,511,627,776 bytes. It's used for measuring larger amounts of data, such as in high-capacity hard drives and data centers.
 *
 *  Petabyte - 1,024 terabytes or 1,125,899,906,842,624 bytes. It's used for measuring very large amounts of data, often found in enterprise-level storage systems and cloud storage.
 *
 *  Exabyte
 *
 *  Zettabyte
 *
 *  Yottabyte
 */

int reference()
{
    int num{0};

    int &x = num;                  // & means reference
    std::cout << &num << '\n';     // address of operator
    std::string &&test = "string"; // Example of a r-value reference, used in move semantics

    return 0;
}

/**
 *
 *  Pointer variables - A pointer is a special type of C++ variable that can hold the address of another variable
 *
 */

int main()
{
    int *pointer; // This reads as pointer is a variable that can hold the address of an int variable, or pointers holds the value of an int

    int num{0};

    int *point = &num; // Point contains the address of num, or point points to num

    std::cout << *point; // If we want to use the pointer we need to dereference the pointer
}