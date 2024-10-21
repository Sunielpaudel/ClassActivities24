#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

struct Customer {
    int id;
    std::string name;
   std:: string email;

    void displayCustomer();
};

#endif