#ifndef TABLICA_H
#define TABLICA_H
#include <iostream>
#include <ctime> // dla funkcji rand()
#include <cstdlib> // dla funkcji rand() i srand()

class Tablica {
private:
    int tab[10][10]; // tablica 10x10
    int suma = 0; // zmienna do przechowywania sumy liczb z przekątnej

public:

void czytaj_dane() {
    std::srand(std::time(0)); // inicjalizacja generatora liczb losowych
    for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (i == j) {
                    tab[i][j] = std::rand() % 10;
                } else {
                    tab[i][j] = 0; // wypełnienie pozostałych elementów zerami
                }
            }
        }

}

void przetworz_dane() {
    suma = 0; // resetowanie sumy
    for (int i = 0; i < 10; i++) {
        suma += tab[i][i]; // dodawanie elementów z przekątnej
    }
    std::cout << "Suma elementów na przekątnej wynosi " << suma << "." << std::endl;
}

void wyswietl_wynik(){
    

    std::cout << "Zawartość tablicy:" << std::endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            std::cout << tab[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
};

#endif