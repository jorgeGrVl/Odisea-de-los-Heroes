#include "Mago.h"
#include <iostream>

using namespace std;

Mago::Mago(){
}

Mago::Mago(string _nombre, int _vida, int _fuerza, int _defensa, int _velocidad, Habilidad _habilidad, Herramienta _herramienta)
    :Personaje(_nombre, _vida, _fuerza, _defensa, _velocidad, _habilidad, _herramienta){
}

string Mago::getClase(){
    return clase;
}

void Mago::recibeRecuperacion(){
    if(getVida() <= 10){
        setVida(getVida() + recuperacion);
    cout << endl <<"- " << getNombre() << " activo la habilidad Recuperacion" << endl;
    cout << "- La vida de " << getNombre() << " aumento a " << getVida() << endl;
    }
}

