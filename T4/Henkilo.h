#pragma once


#include <iostream>
#include <string>
#include "Osoite.h"
#include "Kalenterimerkinta.h"



class Henkilo {
private:
    std::string nimi;
    int ika;
    Osoite osoite;
    Kalenterimerkinta merkinta;

public:
    Henkilo() : nimi(""), ika(0), osoite(), merkinta() {}

    Henkilo(const std::string& nimi_, int ika_, const Osoite& osoite_, const Kalenterimerkinta& merkinta_);

    // Copy constructor
    Henkilo(const Henkilo& other);

    ~Henkilo();

    void SetNimi(const std::string& nimi_);
    void SetIka(int ika_);
    std::string GetNimi() const;
    int GetIka() const;

    void TulostaHenkilonTiedot() const;
};
