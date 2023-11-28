#include "Guerrero.h"
#include <iostream>

using namespace std;

//Constructor predeterminado de la clase Guerrero. Crea objetos con valores default.
Guerrero::Guerrero(){
}

//Constructor parametrizado de la clase Guerrero. Crea objetos con valores definidos.
//Utiliza el método constructor parametrizado de la clase Personaje para inicializar atributos.
Guerrero::Guerrero(string _nombre, int _vida, int _fuerza, int _defensa, int _velocidad, Habilidad _habilidad, Herramienta _herramienta)
        :Personaje(_nombre, _vida, _fuerza, _defensa, _velocidad, _habilidad, _herramienta){
}

//Regresa la clase del Guerrero.
string Guerrero::getClase(){
    return clase;
}

//Incrementa la fuerza del Guerrero si su vida e menor o igual a 10. Regresa un mensaje descriptivo.
string Guerrero::recibeFuria(){
    string mensaje = "";
    if(getVida() <= 10){
        setFuerza(getFuerza() + furia);
        mensaje += "\n- " + getNombre() + " activo la habilidad Furia\n";
        mensaje += "- La fuerza de " + getNombre() + " aumento a " + to_string(getFuerza()) + "\n";
    }
    return mensaje;
}
