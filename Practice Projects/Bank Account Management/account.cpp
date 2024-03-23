#include <iostream>
#include <string>

using string = std::string;
/*
 * Build a program to manage bank accounts.
 * Each account can have attributes like account number, balance, owner, etc.
 * Use classes to represent bank accounts and manage them using pointers.
 */

struct Person
{
    string name;
    int age;
    int weight;
    int height;
    string users_bank_name;
};

/**
 *  @note The data type long is equal to 32 bits, long long is 64 bits
 *
 *  @note In C++ there is a data type for 32 bits, int32_t. And there is a data type for 64 bits int64_t
 * 
 *  long = int32_t
 *  long long = int64_t
 */

class Bank_Account
{
private:
    string bank_name;
    int64_t account_number;
public:
    Bank_Account(string bank_name_, int64_t account_number_) : account_number(account_number), bank_name(bank_name_) {}; // Constructor initializer list
};

int main()
{
    return 0;
}