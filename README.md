# Customer Management Program

## Project Overview
This is a simple Customer Management program written in C++. It enables users to input and display customer details, such as Customer ID, Name, and Email. This project leverages basic C++ concepts like structures, namespaces, I/O operations, and encapsulation, making it a good foundation for understanding object-oriented programming in C++.

## Objectives
- **Encapsulate Customer Data**: Represent customer information (ID, name, email) in a structured format for easy data handling.
- **Display Customer Information**: Create a straightforward display function to output customer details in a readable format.
- **Namespace Usage**: Implement a namespace (`CustomerNamespace`) to prevent naming conflicts, an essential skill in modular C++ design.
- **User Interaction**: Use I/O streams to allow the user to input customer data and then view that data in a formatted display.

## Code Structure

### Header File - `Customer.hpp`
The header file defines the `Customer` structure within `CustomerNamespace`. It contains:
- Member variables:
  - `id` (int): Customer ID
  - `name` (std::string): Customer name
  - `email` (std::string): Customer email
- A member function `displayCustomer()` for displaying the customer's details.

### Implementation File
The implementation file contains the logic for the `displayCustomer()` function, which outputs the values of `id`, `name`, and `email` to the console.

### Main File
The main file, which includes `Customer.hpp`, interacts with the user to gather customer information. It:
1. Prompts the user for ID, name, and email.
2. Stores these inputs into a `Customer` instance.
3. Calls `displayCustomer()` to output the entered details.

## Screenshots
![Customer Details](https://github.com/user-attachments/assets/0d3f9de7-ef98-4620-8aa9-32d2da6b7e6e)

## Author
**. Kailash Paudel**

**. 10897677.cc.peralta.edu**






