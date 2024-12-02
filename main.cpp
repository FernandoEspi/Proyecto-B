#include <iostream>
#include "Carrera.h"
#include <vector>
#include <string>

using namespace std;

int main() {
    srand(time(NULL));
    vector<string> nombresCaballos = {"Caballo_1", "Caballo_2", "Caballo_3", "Caballo_4","Caballo_5", "Caballo_6", "Caballo_7","Caballo_8", "Caballo_9", "Caballo_10"};
    Carrera carrera(nombresCaballos);
    carrera.simularCarrera();
    carrera.mostrarResultados();
    return 0;
}
