#include <iostream>

int main()
{
    //  128 64 32 16 8 4 2 1

    int x = 12; // 00001100  
    int y = 4; //  00000100
    int z = 0;

    z = x & y;

    std::cout << "Bitwise and is " << z << '\n';

    z = x | y;

    std::cout << "Bitwise OR is " << z << '\n';

    z = x ^ y;

    std::cout << "Bitwise EXCLUSIVE OR  is " << z << '\n';

    z = x << 1;

    std::cout << "Bitwise LEFT SHIFT IS " << z << '\n';

    z = x >> 1;

    std::cout << "Bitwise RIGHT SHIFT IS " << z << '\n';

    z = ~x;
    
    std::cout << "Bitwise NOT IS " << z << '\n';


return 0;
}