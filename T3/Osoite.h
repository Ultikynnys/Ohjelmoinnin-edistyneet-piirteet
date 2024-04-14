#pragma once

#include <string>

class Osoite {
private:
    std::string katuosoite;
    std::string postinumero;
    std::string kunta;

public:
    Osoite(); // Default constructor
    Osoite(const std::string& katuosoite_, const std::string& postinumero_, const std::string& kunta_); // Parameterized constructor
    Osoite(const Osoite& other); // Copy constructor
    ~Osoite(); // Destructor

    // Setters
    void SetKatuosoite(const std::string& katuosoite_);
    void SetPostinumero(const std::string& postinumero_);
    void SetKunta(const std::string& kunta_);

    // Getters
    std::string GetKatuosoite() const;
    std::string GetPostinumero() const;
    std::string GetKunta() const;

    // Function to print address information
    void tulostaTiedot() const;
};
