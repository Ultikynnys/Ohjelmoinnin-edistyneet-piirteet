#pragma once

#include <string>
#include "Osoite.h"

class Henkilo {
private:
    std::string nimi;
    int ika;
    Osoite osoite;

public:
    Henkilo(); // Default constructor
    Henkilo(const std::string& nimi_, int ika_, const Osoite& osoite_); // Parameterized constructor
    Henkilo(const Henkilo& other); // Copy constructor
    ~Henkilo(); // Destructor

    // Setters
    void SetNimi(const std::string& nimi_);
    void SetIka(int ika_);
    void SetOsoite(const Osoite& osoite_);

    // Getters
    std::string GetNimi() const;
    int GetIka() const;
    Osoite GetOsoite() const;

    // Function to print person's information
    void tulostahenkilontiedot() const;
};
