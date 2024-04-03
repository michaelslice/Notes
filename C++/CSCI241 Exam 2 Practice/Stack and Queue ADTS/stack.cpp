#include <iostream>

/**
 *  @note Queue: FIFO
 *
 *  @note Stack: LIFO
 *
 *  @note ERRORS: Underflow errors can error when popping the stack when there is nothing in it.
 *
 *  PUSH: Adds an element to the top of the stack
 *
 *  POP: Removes the top element of the stack
 *
 *  TOP: Returns the top element in the stack
 *
 */

class Stack
{
private:
    int *stk_array;   //  Stack array pointer. A pointer to the data type of the items stored in the stack; points to the first element of a dynamically-allocated array.
    int stk_capacity; // Stack capacity. The number of elements in the stack array.
    int stk_size;     //  Stack size. The number of items currently stored in the stack. The top item in the stack is always located at subscript stk_size - 1.
public:
    void push(int value);
    void reserve(int value);
    void pop();
};

void Stack::push(int value) // If stack is full, reserve additional storage.
{
    if (stk_size == stk_capacity)
    {
        if (stk_capacity == 0)
        {
            reserve(1);
        }
        else
        {
            reserve(stk_capacity * 2);
        }
    }
    // Insert value into stack array and increment stack size.
    stk_array[stk_size] = value;
    stk_size = stk_size + 1;
}

void Stack::pop()
{
    stk_size = stk_size - 1;
}