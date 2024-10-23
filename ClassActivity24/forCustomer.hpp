#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
namespace CustomerNamespace {

    struct Customer {
        int id;
        std::string name;
        std::string email;

        void displayCustomer();
    };
}

#endif CUSTOMER_H