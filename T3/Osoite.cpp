#include "Osoite.h"
#include <iostream>

// Default constructor
Osoite::Osoite() : katuosoite(""), postinumero(""), kunta("") {}

// Parameterized constructor
Osoite::Osoite(const std::string& katuosoite_, const std::string& postinumero_, const std::string& kunta_)
    : katuosoite(katuosoite_), postinumero(postinumero_), kunta(kunta_) {}

// Copy constructor
Osoite::Osoite(const Osoite& other)
    : katuosoite(other.katuosoite), postinumero(other.postinumero), kunta(other.kunta) {}

// Destructor
Osoite::~Osoite() {
    std::cout << "Osoite object destroyed." << std::endl;
}

// Setters
void Osoite::SetKatuosoite(const std::string& katuosoite_) {
    katuosoite = katuosoite_;
}

void Osoite::SetPostinumero(const std::string& postinumero_) {
    postinumero = postinumero_;
}

void Osoite::SetKunta(const std::string& kunta_) {
    kunta = kunta_;
}

// Getters
std::string Osoite::GetKatuosoite() const {
    return katuosoite;
}

std::string Osoite::GetPostinumero() const {
    return postinumero;
}

std::string Osoite::GetKunta() const {
    return kunta;
}

// Function to print address information
void Osoite::tulostaTiedot() const {
    std::cout << katuosoite << ", " << postinumero << " " << kunta << std::endl;
}
