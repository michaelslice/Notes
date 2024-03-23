#include <iostream>

/**
 *
 *  @note The "using" keyword can be used to create a type alias for a data type,
 *  this is commonly used for
 *
 */

int main()
{
    using Price = std::int32_t; // 32 Bit signed integer

    Price item_price = 112;

    std::cout << item_price;

    return 0;
}