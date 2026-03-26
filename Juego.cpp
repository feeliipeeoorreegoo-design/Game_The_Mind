#include "Juego.h"
#include "Mazo.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Juego::Juego() {
    vidas = 3;
    ultimoValor = 0;
}

void Juego::iniciar() {
    for (int i = 0; i < 7; i++) {
        jugador.recibirCarta(mazo.repartirCarta());
    }
}

bool Juego::verificarOrden(int valor) {
    return valor > ultimoValor;
}

void Juego::jugarTurno() {
    jugador.mostrarCartas();
    int opcion;
    cout << "Elige carta: ";
    cin >> opcion;

    Carta c = jugador.jugarCarta(opcion);

    if (verificarOrden(c.getValor())) {
        ultimoValor = c.getValor();
        cout << "Bien jugado\n";
    } else {
        vidas--;
        cout << "Error! Vidas restantes: " << vidas << endl;
    }
}