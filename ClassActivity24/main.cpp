#include <iostream>
#include "forCustomer.hpp"

using namespace CustomerNamespace;

int main() {
   
    Customer customer;

    std::cout << "Enter Customer ID: ";
    std::cin >> customer.id;

    std::cin.ignore();

    std::cout << "Enter Customer Name: ";
    getline(std::cin, customer.name);

    std::cout << "Enter Customer Email: ";
    getline(std::cin, customer.email);

    customer.displayCustomer();

    return 0;
}