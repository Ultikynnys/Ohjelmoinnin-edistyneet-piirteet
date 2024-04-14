#include "Kalenterimerkinta.h"


// Default constructor
Kalenterimerkinta::Kalenterimerkinta()
    : muistutus(false) {}

// Parameterized constructor
Kalenterimerkinta::Kalenterimerkinta(const std::string& asia_, bool muistutus_)
    : asia(asia_), muistutus(muistutus_) {}

// Destructor
Kalenterimerkinta::~Kalenterimerkinta() {
    std::cout << "Kalenterimerkinta object destroyed." << std::endl;
}



void Kalenterimerkinta::setAsia(const std::string& asia_) {
    asia = asia_;
}

void Kalenterimerkinta::setMuistutus(bool muistutus_) {
    muistutus = muistutus_;
}



std::string Kalenterimerkinta::getAsia() const {
    return asia;
}

bool Kalenterimerkinta::getMuistutus() const {
    return muistutus;
}

// Method to print the entry
void Kalenterimerkinta::tulostaMerkinta() const {
    std::cout << "Päiväys: ";
    std::cout << "Asia: " << asia << std::endl;
    std::cout << "Muistutus: " << (muistutus ? "Päällä" : "Ei päällä") << std::endl;
}

// Method to ask for details from the user
void Kalenterimerkinta::kysyTiedot() {
    std::cout << "Anna päiväys:\n";
    std::cout << "Anna asia: ";
    std::cin.ignore(); // Ignore newline character left in the input buffer
    std::getline(std::cin, asia);
    std::cout << "Onko muistutus päällä? (1 = Kyllä, 0 = Ei): ";
    std::cin >> muistutus;
}
