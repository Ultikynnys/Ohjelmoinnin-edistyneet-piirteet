#include "Henkilo.h"
#include <iostream>

// Default constructor
Henkilo::Henkilo() : nimi(""), ika(0), osoite() {}

// Parameterized constructor
Henkilo::Henkilo(const std::string& nimi_, int ika_, const Osoite& osoite_)
    : nimi(nimi_), ika(ika_), osoite(osoite_) {}

// Copy constructor
Henkilo::Henkilo(const Henkilo& other)
    : nimi(other.nimi), ika(other.ika), osoite(other.osoite) {}

// Destructor
Henkilo::~Henkilo() {
    std::cout << "Henkilo object destroyed." << std::endl;
}

// Setters
void Henkilo::SetNimi(const std::string& nimi_) {
    nimi = nimi_;
}

void Henkilo::SetIka(int ika_) {
    ika = ika_;
}

void Henkilo::SetOsoite(const Osoite& osoite_) {
    osoite = osoite_;
}

// Getters
std::string Henkilo::GetNimi() const {
    return nimi;
}

int Henkilo::GetIka() const {
    return ika;
}

Osoite Henkilo::GetOsoite() const {
    return osoite;
}

// Function to print person's information
void Henkilo::tulostahenkilontiedot() const {
    std::cout << "Nimi: " << nimi << std::endl;
    std::cout << "Ika: " << ika << std::endl;
    std::cout << "Osoite: ";
    osoite.tulostaTiedot();
}
