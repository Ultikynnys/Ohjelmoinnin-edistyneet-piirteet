#pragma once

#include <string>
#include <iostream>

class Kalenterimerkinta {
private:
    std::string asia;
    bool muistutus;

public:
    // Default constructor
    Kalenterimerkinta();

    // Parameterized constructor
    Kalenterimerkinta(const std::string& asia_, bool muistutus_);

    // Destructor
    ~Kalenterimerkinta();

    // Setters

    void setAsia(const std::string& asia_);
    void setMuistutus(bool muistutus_);

    // Getters
    std::string getAsia() const;
    bool getMuistutus() const;

    // Method to print the entry
    void tulostaMerkinta() const;

    // Method to ask for details from the user
    void kysyTiedot();
};
