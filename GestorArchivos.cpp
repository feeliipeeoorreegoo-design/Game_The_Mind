#include "GestorArchivos.h"
#include <fstream>

using namespace std;
 
void GestorArchivos::guardar(int vidas, int ultimoValor) {
    ofstream archivo("partida.txt");
    archivo << vidas << " " << ultimoValor;
    archivo.close();
}