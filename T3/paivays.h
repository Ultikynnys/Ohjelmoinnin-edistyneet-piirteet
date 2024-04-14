#pragma once

#include <iostream>

class Paivays {
private:
    int paiva;
    int kuukausi;
    int vuosi;

public:
    Paivays(); // Default constructor
    Paivays(int _paiva, int _kuukausi, int _vuosi); // Parameterized constructor
    ~Paivays(); // Destructor

    // Setters
    void setPaiva(int p);
    void setKuukausi(int k);
    void setVuosi(int v);

    // Getters
    int getPaiva() const;
    int getKuukausi() const;
    int getVuosi() const;

    // Function to print the date
    void tulostaPaivays() const;

    // Function to ask for the date from user
    void kysyPaivays();

    // Function to add a day to the date
    void lisaaPaiva();
};
