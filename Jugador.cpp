#include "Jugador.h"
#include <iostream>

using namespace std;

Jugador::Jugador() {}

void Jugador::recibirCarta(Carta c) {
    cartas.push_back(c);
}

void Jugador::mostrarCartas() {
    for (int i = 0; i < cartas.size(); i++) {
        cout << i << ": " << cartas[i].getValor() << endl;
    }
}

Carta Jugador::jugarCarta(int index) {
    Carta c = cartas[index];
    cartas.erase(cartas.begin() + index);
    return c;
}

int Jugador::cantidadCartas() {
    return cartas.size();
}