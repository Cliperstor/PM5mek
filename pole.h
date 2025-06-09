#ifndef POLE_H
#define POLE_H
#include <iostream>
#include <iomanip> // dla std::setprecision

class Pole {
private:
    float a, b;  // a - dlugosc, b - szerokosc prostokata
    float pole;  // pole prostokata

public:
    void czytaj_dane() {
    std::cout << "Program oblicza pole prostokata." << std::endl;

    std::cout << "Podaj bok a.\n";
    while (!(std::cin >> a) || a <= 0) {
        std::cout << "Błąd! Podaj poprawną dodatnią liczbę dla boku a: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    std::cout << "Podaj bok b.\n";
    while (!(std::cin >> b) || b <= 0) {
        std::cout << "Błąd! Podaj poprawną dodatnią liczbę dla boku b: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }
    }

    void przetworz_dane() {
        pole = a * b;
    }

    void wyswietl_wynik() {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Pole prostokata o boku a = " << a
                  << " i boku b = " << b
                  << " wynosi " << pole << std::endl;
    }
};

#endif
