#include <iostream>
#include <string>
#include <ostream>

#ifndef ORDER_H
#define ORDER_H

using namespace std;

class Order
{
    // Declare the overloaded opeartor << to be a friend of the class Order
    friend std::ostream &operator<<(std::ostream &os, Order &obj); // Stream insertion
    friend std::istream &operator>>(std::istream &os, Order &obj); // Stream extraction

private:
    int order_id;
    int32_t price;
    int64_t quantity;
    bool buy_or_sell; // 0 for sell, 1 for buy
public:
    Order(){};
    Order(int order_id_, int32_t price_, int64_t quantity_, bool buy_or_sell_) : order_id(order_id_), price(price_), quantity(quantity_), buy_or_sell(buy_or_sell_){};
    // Accessor Methods, get
    int get_order_id();
    int32_t get_price();
    int64_t get_quantity();
    bool get_buy_or_sell();
    // Mutator Methods, set
    void set_order_id(int order_id_);
    void set_price(int32_t price_);
    void set_quantity(int64_t quantity_);
    void set_buy_or_sell(bool buy_or_sell);
};

// Accessor Methods
int Order::get_order_id()
{
    return order_id;
}

int32_t Order::get_price()
{
    return price;
}

int64_t Order::get_quantity()
{
    return quantity;
}

bool Order::get_buy_or_sell()
{
    return buy_or_sell;
}

// Mutator Methods
void Order::set_order_id(int order_id_)
{
    order_id = order_id_;
}

void Order::set_price(int32_t price_)
{
    price = price_;
}

void Order::set_quantity(int64_t quantity_)
{
    quantity = quantity_;
}

void Order::set_buy_or_sell(bool buy_or_sell_)
{
    buy_or_sell = buy_or_sell_;
}

std::ostream &operator<<(std::ostream &os, Order &obj) // We dont pass by the obj by const reference because stream insertion 
{
    os << obj.order_id;

    return os;
}

std::istream &operator>>(std::istream &is, Order& obj)
{
    is >> obj.order_id;
    is >> obj.quantity;

    return is;
}

#endif