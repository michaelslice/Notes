#include <iostream>
#include <vector>
#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include "order.h"

class Orderbook
{
private:
    std::vector<Order> buy_orders;
    std::vector<Order> sell_orders;

public:
    /** 
    addOrder
    modifyOrder
    cancelOrder
    getBestBidPrice
    getBestAskPrice
    */
};

#endif