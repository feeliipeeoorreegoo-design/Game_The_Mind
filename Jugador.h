#ifndef JUGADOR_H
#define JUGADOR_H

#include <vector>
#include "Carta.h"

using namespace std;

class Jugador {
private:
    vector<Carta> cartas;

public:
    Jugador();
    void recibirCarta(Carta c);
    void mostrarCartas();
    Carta jugarCarta(int index);
    int cantidadCartas();
};

#endif