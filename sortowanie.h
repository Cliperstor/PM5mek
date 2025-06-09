#ifndef SORTOWANIE_H
#define SORTOWANIE_H
#include <iostream>
#include <cstdlib> // dla funkcji rand() i srand()
#include <ctime>   // dla funkcji time()

class Sortowanie {

    private:
        static const int n = 6; // rozmiar tablicy
        int liczby[n]; // tablica do przechowywania liczb

    public:

    void czytaj_dane(){
        std::srand(std::time(0));
        std::cout << "Liczby nieposortowane:\n";
        for (int i = 0; i < n; i++) {
            liczby[i] = std::rand() % 100; // losowanie liczb z zakresu 0-99
            std::cout << liczby[i] << " ";
        }
        std::cout << std::endl;

    }

    void przetworz_dane(){
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (liczby[j] > liczby[j + 1]) {
                    // zamiana miejscami
                    int temp = liczby[j];
                    liczby[j] = liczby[j + 1];
                    liczby[j + 1] = temp;
                }
            }
        }

    }

    void wyswietl_dane(){
        std::cout << "Liczby posortowane:\n";
        for (int i = 0; i < n; i++) {
            std::cout << liczby[i] << " ";
        }
        std::cout << std::endl;

    }

};

#endif