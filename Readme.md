# The Mind - Juego en C++

Proyecto desarrollado en C++ basado en el juego de mesa *The Mind*, implementado con programación orientada a objetos.

# Descripción

Este proyecto simula una versión simplificada del juego *The Mind*, donde los jugadores deben jugar cartas en orden ascendente sin comunicarse explícitamente.

El objetivo es mantener la sincronización entre jugadores utilizando lógica del programa.

# Características

* Uso de clases (POO)
* Separación en archivos ".h" y ".cpp"
* Implementación de mazo de cartas
* Sistema de jugadores
* Lógica básica del juego
* Guardado de partida en archivo

# Estructura del proyecto

GameTheMind-CPP/

main.cpp

Juego.h / Juego.cpp

Jugador.h / Jugador.cpp

Carta.h / Carta.cpp

Mazo.h / Mazo.cpp

GestorArchivos.h / GestorArchivos.cpp

README.md

# Clases principales

* *Carta* Representa una carta con un valor numérico
* *Jugador* Maneja la mano de cartas de cada jugador
* *Mazo* Genera, baraja y reparte cartas
* *Juego* Controla la lógica del juego
* *GestorArchivos* Guarda y carga partidas

---

# Cómo ejecutar el proyecto

    1. Compilar
g++ *.cpp -o juego


    2. Ejecutar
./juego

# Guardado de partida

El juego permite guardar el estado actual en un archivo para continuar posteriormente.

# Tecnologías usadas

* Lenguaje: *C++*
* Compilador: *g++*
* Entorno: *Visual Studio Code*


# UML

El proyecto incluye un diagrama UML que muestra la relación entre clases.

<img width="2800" height="2108" alt="image" src="https://github.com/user-attachments/assets/2e0ccbf6-53e8-40bf-9d8e-c12c349d7578" />
