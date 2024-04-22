#include "person.h"


Person::Person(const std::string& name, int age, const Address& address)
    : name(name), age(age), address(address) {}

Person::~Person()
{
}

std::string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

Address Person::getAddress() const {
    return address;
}

void Person::setName(const std::string& name) {
    this->name = name;
}

void Person::setAge(int age) {
    this->age = age;
}

void Person::setAddress(const Address& address) {
    this->address = address;
}

void Person::printInfo() const {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
    std::cout << "Address: " << address.getStreetAddress() << ", "
        << address.getPostalCode() << ", " << address.getMunicipality() << std::endl;
}
