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
        jugador1.recibirCarta(mazo.repartirCarta());
        jugador2.recibirCarta(mazo.repartirCarta());
    }
}

bool Juego::verificarOrden(int valor) {
    return valor > ultimoValor;
}

void Juego::jugarTurno() {
    jugador1.mostrarCartas();
    int opcion;
    cout << "Elige carta: ";
    cin >> opcion;

    Carta c = jugador1.jugarCarta(opcion);

    if (verificarOrden(c.getValor())) {
        ultimoValor = c.getValor();
        cout << "Bien jugado\n";
    } else {
        vidas--;
        cout << "Error! Vidas restantes: " << vidas << endl;
    }

    // 🔹 agregado jugador 2
    jugador2.mostrarCartas();
    cout << "Elige carta: ";
    cin >> opcion;

    Carta c2 = jugador2.jugarCarta(opcion);

    if (verificarOrden(c2.getValor())) {
        ultimoValor = c2.getValor();
        cout << "Bien jugado\n";
    } else {
        vidas--;
        cout << "Error! Vidas restantes: " << vidas << endl;
    }
}
