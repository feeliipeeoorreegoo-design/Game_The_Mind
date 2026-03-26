#include "Mazo.h"
#include <algorithm>
#include <cstdlib>

using namespace std; 

Mazo::Mazo() {
    for (int i = 1; i <= 100; i++) {
        cartas.push_back(Carta(i));
    }
}

void Mazo::barajar() {
    random_shuffle(cartas.begin(), cartas.end());
}

Carta Mazo::repartirCarta() {
    Carta c = cartas.back();
    cartas.pop_back();
    return c;
}