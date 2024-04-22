#pragma once

#include <string>
#include <iostream>

class Address {
private:
    std::string streetAddress;
    std::string postalCode;
    std::string municipality;

public:
    // Constructors
    Address();
    Address(const std::string& street, const std::string& postal, const std::string& city);

    // Getters
    std::string getStreetAddress() const;
    std::string getPostalCode() const;
    std::string getMunicipality() const;

    // Setters
    void setStreetAddress(const std::string& street);
    void setPostalCode(const std::string& postal);
    void setMunicipality(const std::string& city);

    // Other methods
    void printInfo() const;
};
