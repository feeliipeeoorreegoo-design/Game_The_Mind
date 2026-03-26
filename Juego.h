#ifndef JUEGO_H
#define JUEGO_H

#include "Jugador.h"
#include "Mazo.h"

class Juego {
private:
    Mazo mazo;
    Jugador jugador;
    int vidas;
    int ultimoValor;

public:
    Juego();
    void iniciar();
    void jugarTurno();
    bool verificarOrden(int valor);
};

#endif