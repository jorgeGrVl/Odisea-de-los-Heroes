#include "Mago.h"
#include <iostream>

using namespace std;

//Constructor predeterminado de la clase Mago. Crea objetos con valores default.
Mago::Mago(){
}

//Constructor parametrizado de la clase Mago. Crea objetos con valores definidos.
//Utiliza el método constructor parametrizado de la clase Personaje para inicializar atributos.
Mago::Mago(string _nombre, int _vida, int _fuerza, int _defensa, int _velocidad, Habilidad _habilidad, Herramienta _herramienta)
    :Personaje(_nombre, _vida, _fuerza, _defensa, _velocidad, _habilidad, _herramienta){
}

//Regresa la clase del Mago.
string Mago::getClase(){
    return clase;
}

//Incrementa la vida del Mago si su vida e menor o igual a 10. Regresa un mensaje descriptivo.
string Mago::recibeRecuperacion(){
    string mensaje = "";
    if(getVida() <= 10){
        setVida(getVida() + recuperacion);
        mensaje += "\n- " + getNombre() + " activo la habilidad Recuperacion\n";
        mensaje += "- La vida de " + getNombre() + " aumento a " + to_string(getVida()) + "\n";
    }
    return mensaje;
}

