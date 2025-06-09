#ifndef PIERWIASTKI_H
#define PIERWIASTKI_H

#include <iostream>
#include <cmath> // dla funkcji sqrt()
#include <iomanip> // dla std::setprecision

class Pierwiastki {

private:
    float a, b, c;   // współczynniki równania kwadratowego
    float delta;     // wyróżnik (delta)
    float x1, x2;    // pierwiastki

public:

    void czytaj_dane() {
        std::cout << "Program oblicza pierwiastki rownania kwadratowego." << std::endl;
        std::cout << "Podaj a.\n";
        std::cin >> a;
        while (a == 0) {
            std::cout << "Współczynnik 'a' nie może być zerem. Podaj ponownie: ";
            std::cin >> a;
        }

        std::cout << "Podaj b.\n";
        std::cin >> b;

        std::cout << "Podaj c.\n";
        std::cin >> c;
    }

    void przetworz_dane() {
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
        } else if (delta == 0) {
            x1 = x2 = -b / (2 * a);
        }
    }

    void wyswietl_wynik() {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Dla wprowadzonych liczb:\n";
        std::cout << "a = " << a << ",\n b = " << b << ",\n c = " << c << std::endl;

        if (delta < 0) {
            std::cout << "Trójmian nie ma pierwiastkow rzeczywistych." << std::endl;
        } else if (delta == 0) {
            std::cout << "Trójmian ma jeden pierwiastek: x = " << x1 << std::endl;
        } else {
            std::cout << "Trójmian ma dwa pierwiastki:" << std::endl; 
            std::cout << "x1 = " << x1 << "," << std::endl;
            std::cout << "x2 = " << x2 << std::endl;
        }
    }
};

#endif
