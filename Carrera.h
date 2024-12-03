#ifndef CARRERA_H
#define CARRERA_H

#include <vector>
#include <string>

using namespace std;

class Caballo {
private:
    string nombre;
    int recorrido;
    int pasos;

public:
    Caballo(string nombre);
    ~Caballo();
    void avanzar();
    int getRecorrido() const;
    int getPasos() const;
    string getNombre() const;
};

class Carrera {
private:
    vector<Caballo> caballos;

public:
    Carrera(const vector<string>& nombres);
    ~Carrera();
    void simularCarrera();
    void mostrarResultados();
};

#endif
