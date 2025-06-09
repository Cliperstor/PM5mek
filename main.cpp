#include <iostream>
#include "pole.h"
#include "pierwiastki.h"
#include "tablica.h"
#include "sortowanie.h"

int main() {
    char wybor;

    do {
        std::cout << "Maksym Ek 2G\n";
        std::cout << "Zespół Szkół Elektronicznych i Licealnych\n";
        std::cout << "Przedmiot: PM5\n\n";

        std::cout << "[1] Oblicz pole prostokąta\n";
        std::cout << "[2] Oblicz pierwiastki rownania kwadratowego\n";
        std::cout << "[3] Tablica\n";
        std::cout << "[4] Sortowanie\n";
        std::cout << "[Q] Quit\n";
        std::cout << "Wybierz opcje: ";

        std::cin >> wybor;
        wybor = std::tolower(wybor);

        switch (wybor) {
            case '1': {
                Pole p;
                p.czytaj_dane();
                p.przetworz_dane();
                p.wyswietl_wynik();
                break;
            }
            case '2': {
                Pierwiastki pi;
                pi.czytaj_dane();
                pi.przetworz_dane();
                pi.wyswietl_wynik();
                break;
            }
            case '3': {
                Tablica t;
                t.czytaj_dane();
                t.przetworz_dane();
                t.wyswietl_wynik();
                break;
            }
            case '4': {
                Sortowanie s;
                s.czytaj_dane();
                s.przetworz_dane();
                s.wyswietl_dane();
                break;
            }
            case 'q':
                std::cout << "Koniec programu.\n";
                return 0;

            default:
                std::cout << "Niepoprawny wybor. Sprobuj ponownie.\n";
                break;
        }

        std::cout << "\n[1] Powrot do menu glownego\n[Q] Wyjscie\nWybierz: ";
        std::cin >> wybor;
        wybor = std::tolower(wybor);

        if (wybor == 'q') {
            std::cout << "Zegnaj!\n";
            break;
        }
        std::cout << std::endl;

    } while (true);

    return 0;
}
