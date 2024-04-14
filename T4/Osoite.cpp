#include "Osoite.h"

// Constructor
Osoite::Osoite(const std::string& katuosoite_, const std::string& postinumero_, const std::string& kunta_)
    : katuosoite(katuosoite_), postinumero(postinumero_), kunta(kunta_) {}

// Setters
void Osoite::setKatuosoite(const std::string& katuosoite_) {
    katuosoite = katuosoite_;
}

void Osoite::setPostinumero(const std::string& postinumero_) {
    postinumero = postinumero_;
}

void Osoite::setKunta(const std::string& kunta_) {
    kunta = kunta_;
}

// Getters
std::string Osoite::getKatuosoite() const {
    return katuosoite;
}

std::string Osoite::getPostinumero() const {
    return postinumero;
}

std::string Osoite::getKunta() const {
    return kunta;
}

// Print address information
void Osoite::tulostaTiedot() const {
    std::cout << "Katuosoite: " << katuosoite << "\nPostinumero: " << postinumero << "\nKunta: " << kunta << std::endl;
}
