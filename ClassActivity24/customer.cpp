#include "forCustomer.hpp"
#include <iostream>

void Customer::displayCustomer() {
    std::cout << "\nCustomer Details:" << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Email: " << email << std::endl;
}