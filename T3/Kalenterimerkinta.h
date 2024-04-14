#pragma once

#include "Paivays.h"
#include <string>

class Kalenterimerkinta {
private:
    Paivays paivays;
    std::string asia;
    bool muistutus;

public:
    // Default constructor
    Kalenterimerkinta();

    // Parameterized constructor
    Kalenterimerkinta(const Paivays& paivays_, const std::string& asia_, bool muistutus_);

    // Destructor
    ~Kalenterimerkinta();

    // Setters
    void setPaivays(const Paivays& paivays_);
    void setAsia(const std::string& asia_);
    void setMuistutus(bool muistutus_);

    // Getters
    Paivays getPaivays() const;
    std::string getAsia() const;
    bool getMuistutus() const;

    // Method to print the entry
    void tulostaMerkinta() const;

    // Method to ask for details from the user
    void kysyTiedot();
};
