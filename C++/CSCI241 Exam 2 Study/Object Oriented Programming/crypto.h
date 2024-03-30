#include <iostream>
#include <string>
#ifndef CRYPTO_H // Header guards
#define CRYPTO_H

/**
 *  @note Cryptocurrency class, a class to represent a crypto currency 
 *  Attributes: name, symbol, current price, market cap
 * 
 *  Include: Methods to update price, retrieve information, 
 *
*/
class Crypto
{
private:
    std::string name;
    int64_t price;
    int64_t market_cap;
public:
    Crypto();
    Crypto(std::string name_, int64_t price_, int64_t market_cap_): name(name_), price(price_), market_cap(market_cap_) {}; 
    std::string get_name();
    std::string set_name();
    int64_t get_price();
    std::string set_price();
    int64_t get_market_cap();

};

#endif // Header guards