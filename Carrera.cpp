#include "Carrera.h"
#include <iostream>
#include <random>

using namespace std;


Caballo::Caballo(string nombre) : nombre(nombre), recorrido(0), pasos(0) {}
Caballo::~Caballo() {}

void Caballo::avanzar() {
    float probabilidad = (rand() % 10 + 1)/10;
    pasos++;

    if (probabilidad > 0.8) {
        recorrido += 5;
    } else if (probabilidad >= 0.3) {
        recorrido += 3;
    } else {
        recorrido += 1;
    }
}

int Caballo::getRecorrido() const {
    return recorrido;
}

int Caballo::getPasos() const {
    return pasos;
}

string Caballo::getNombre() const {
    return nombre;
}

Carrera::Carrera(const vector<string>& nombres) {
    for (const auto& nombre : nombres) {
        caballos.emplace_back(nombre);
    }
}

Carrera::~Carrera() {}

void Carrera::simularCarrera() {
    bool carreraEnCurso = true;

    while (carreraEnCurso) {
        carreraEnCurso = false;

        for (auto& caballo : caballos) {
            if (caballo.getRecorrido() < 1000) {
                caballo.avanzar();
                carreraEnCurso = true;
            }
        }
    }
}

for (size_t i = 0; i < caballos.size() - 1; ++i) {
        for (size_t j = 0; j < caballos.size() - i - 1; ++j) {
            if (caballos[j].getPasos() > caballos[j + 1].getPasos()) {
                // Intercambiar manualmente
                Caballo temp = caballos[j];
                caballos[j] = caballos[j + 1];
                caballos[j + 1] = temp;
            }
        }
    }

    cout << "Resultados de la carrera:" << endl;
    cout << "Ganador: " << caballos[0].getNombre() << ", cantidad de pasos: " << caballos[0].getPasos() << endl;
    cout << "2o puesto: " << caballos[1].getNombre() << ", cantidad de pasos: " << caballos[1].getPasos() << endl;
    cout << "3er puesto: " << caballos[2].getNombre() << ", cantidad de pasos: " << caballos[2].getPasos() << endl;
}
