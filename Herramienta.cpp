#include "Herramienta.h"
#include <iostream>

using namespace std;

Herramienta::Herramienta(){
}

Herramienta::Herramienta(string _nombre, string _efecto, int _modificador){
    nombre = _nombre;
    efecto = _efecto;
    modificador = _modificador;
}

string Herramienta::getNombre(){
    return nombre;
}

string Herramienta::getEfecto(){
    return efecto;
}

int Herramienta::getModificador(){
    return modificador;
}

string Herramienta::aplicarEfecto(){
    return "- La herramienta " + nombre + " aplico el efecto " + efecto + " sobre ";
}
