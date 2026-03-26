#include "Juego.h"

int main() {
    Juego juego;
    juego.iniciar();

    for (int i = 0; i < 7; i++) {
        juego.jugarTurno();
    }

    return 0;
}