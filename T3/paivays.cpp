#include "Paivays.h"

// Default constructor
Paivays::Paivays()
    : paiva(1), kuukausi(1), vuosi(2000) {}

// Parameterized constructor
Paivays::Paivays(int _paiva, int _kuukausi, int _vuosi)
    : paiva(_paiva), kuukausi(_kuukausi), vuosi(_vuosi) {}

// Destructor
Paivays::~Paivays() {
    std::cout << "Paivays object destroyed." << std::endl;
}

// Setters
void Paivays::setPaiva(int p) {
    paiva = p;
}

void Paivays::setKuukausi(int k) {
    kuukausi = k;
}

void Paivays::setVuosi(int v) {
    vuosi = v;
}

// Getters
int Paivays::getPaiva() const {
    return paiva;
}

int Paivays::getKuukausi() const {
    return kuukausi;
}

int Paivays::getVuosi() const {
    return vuosi;
}

// Function to print the date
void Paivays::tulostaPaivays() const {
    std::cout << paiva << "." << kuukausi << "." << vuosi << std::endl;
}

// Function to ask for the date from user
void Paivays::kysyPaivays() {
    std::cout << "Anna paiva: ";
    std::cin >> paiva;
    std::cout << "Anna kuukausi: ";
    std::cin >> kuukausi;
    std::cout << "Anna vuosi: ";
    std::cin >> vuosi;
}

// Function to add a day to the date
void Paivays::lisaaPaiva() {
    paiva++;
    // Adjust if the day exceeds the maximum for the month
    if (paiva > 31) {
        paiva = 1;
        kuukausi++;
        // Adjust if the month exceeds December
        if (kuukausi > 12) {
            kuukausi = 1;
            vuosi++;
        }
    }
}
