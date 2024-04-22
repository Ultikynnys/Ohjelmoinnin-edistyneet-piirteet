#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "address.h" // Include the Address class


class Person {
private:
    std::string name;
    int age;
    Address address; // Add an Address member variable

public:
    Person(const std::string& name, int age, const Address& address);

    virtual ~Person();

    // Getters
    std::string getName() const;
    int getAge() const;
    Address getAddress() const; // Getter for Address

    // Setters
    void setName(const std::string& name);
    void setAge(int age);
    void setAddress(const Address& address); // Setter for Address

    // Other methods
    virtual void printInfo() const;
};
