#include "Habilidad.h"
#include <iostream>
#include <string>

using namespace std;

Habilidad::Habilidad(){
}

Habilidad::Habilidad(string _nombre, string _efecto, int _modificador, int _poder){
    nombre = _nombre;
    efecto = _efecto;
    modificador = _modificador;
    poder = _poder;
}

string Habilidad::getNombre(){
    return nombre;
}

string Habilidad::getEfecto(){
    return efecto;
}

int Habilidad::getModificador(){
    return modificador;
}

int Habilidad::getPoder(){
    return poder;
}

string Habilidad::aplicarAtaque(){
    return "- La habilidad " + nombre + " realiza " + to_string(poder) + " puntos de daño";
}

string Habilidad::aplicarEfecto(){
    return "- Se aplico el efecto " + efecto + " sobre ";
}
