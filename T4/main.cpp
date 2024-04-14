#include <iostream>
#include <vector>
#include <memory>
#include "Henkilo.h"

int main() {
    std::vector<std::shared_ptr<Henkilo>> henkilot;

    // Luodaan 5 henkilöä ja lisätään ne vektoriin osoittimina
    for (int i = 0; i < 5; ++i) {
        std::string nimi = "Henkilo" + std::to_string(i + 1);
        int ika = 20 + i;
        Osoite osoite("Esimerkkikatu " + std::to_string(i + 1), "00" + std::to_string(i), "Esimerkkikunta");
        Kalenterimerkinta merkinta("Merkintä " + std::to_string(i + 1), (i % 2 == 0));
        henkilot.push_back(std::make_shared<Henkilo>(nimi, ika, osoite, merkinta));
    }

    // Tulostetaan henkilöt
    std::cout << "Henkilöt:\n";
    for (const auto& henkilo : henkilot) {
        henkilo->TulostaHenkilonTiedot();
        std::cout << std::endl;
    }

    return 0;
}
