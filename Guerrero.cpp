#include "Guerrero.h"
#include <iostream>

using namespace std;

Guerrero::Guerrero(){
}

Guerrero::Guerrero(string _nombre, int _vida, int _fuerza, int _defensa, int _velocidad, Habilidad _habilidad, Herramienta _herramienta)
        :Personaje(_nombre, _vida, _fuerza, _defensa, _velocidad, _habilidad, _herramienta){
}

string Guerrero::getClase(){
    return clase;
}

void Guerrero::recibeFuria(){
    if(getVida() <= 10){
        setFuerza(getFuerza() + furia);
    cout << endl <<"- " << getNombre() << " activo la habilidad Furia" << endl;
    cout << "- La fuerza de " << getNombre() << " aumento a " << getFuerza() << endl;
    }
}
