#include "address.h"


// Constructors
Address::Address() : streetAddress("TEST STREET 123"), postalCode("TEST POSTAL CODE"), municipality("TEST MUNICAPILITY") {}

Address::Address(const std::string& street, const std::string& postal, const std::string& city)
    : streetAddress(street), postalCode(postal), municipality(city) {}

// Getters
std::string Address::getStreetAddress() const {
    return streetAddress;
}

std::string Address::getPostalCode() const {
    return postalCode;
}

std::string Address::getMunicipality() const {
    return municipality;
}

// Setters
void Address::setStreetAddress(const std::string& street) {
    streetAddress = street;
}

void Address::setPostalCode(const std::string& postal) {
    postalCode = postal;
}

void Address::setMunicipality(const std::string& city) {
    municipality = city;
}

// Other methods
void Address::printInfo() const {
    std::cout << "Street Address: " << streetAddress << std::endl;
    std::cout << "Postal Code: " << postalCode << std::endl;
    std::cout << "Municipality: " << municipality << std::endl;
}
