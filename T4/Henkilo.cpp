#include <iostream>
#include <string>
#include "Henkilo.h"

Henkilo::Henkilo(const std::string& nimi_, int ika_, const Osoite& osoite_, const Kalenterimerkinta& merkinta_)
    : nimi(nimi_), ika(ika_), osoite(osoite_), merkinta(merkinta_) {}

// Copy constructor

Henkilo::Henkilo(const Henkilo& other)
    : nimi(other.nimi), ika(other.ika), osoite(other.osoite), merkinta(other.merkinta) {}

 Henkilo::~Henkilo() {
    std::cout << "Henkilo object destroyed." << std::endl;
}

void Henkilo::SetNimi(const std::string& nimi_) { nimi = nimi_; }

void Henkilo::SetIka(int ika_) { ika = ika_; }

std::string Henkilo::GetNimi() const { return nimi; }

int Henkilo::GetIka() const { return ika; }

void Henkilo::TulostaHenkilonTiedot() const {
    std::cout << "Nimi: " << nimi << "\nIka: " << ika << std::endl;
    osoite.tulostaTiedot();
    merkinta.tulostaMerkinta();
}
