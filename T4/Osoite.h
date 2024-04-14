

#pragma once

#include <string>
#include <iostream>

class Osoite {
private:
    std::string katuosoite;
    std::string postinumero;
    std::string kunta;

public:

    Osoite():katuosoite("test"),postinumero("test"),kunta("test"){};
    // Constructor
    Osoite(const std::string& katuosoite_, const std::string& postinumero_, const std::string& kunta_);

    // Setters
    void setKatuosoite(const std::string& katuosoite_);
    void setPostinumero(const std::string& postinumero_);
    void setKunta(const std::string& kunta_);

    // Getters
    std::string getKatuosoite() const;
    std::string getPostinumero() const;
    std::string getKunta() const;

    // Print address information
    void tulostaTiedot() const;
};

