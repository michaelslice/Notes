#include <iostream>

#include "order.h"
#include "orderbook.h"

#include <ostream> // Output stream

#include <istream> // Input stream

int main()
{
    Order ord;

    std::cout << "Will this order be buy or sell?" << '\n';
    std::cin >> ord; // Generates the function call operator>>(cin, ord)  
    std::cout << "Please enter a stock to buy or sell" << '\n';
    std::cin >> ord;

    std::cout << ord.get_order_id();
        std::cout << ord.get_quantity();
}