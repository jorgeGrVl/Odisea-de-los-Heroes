#include "Habilidad.h"
#include <iostream>

using namespace std;

//Constructor predeterminado de la clase Habilidad. Crea objetos con valores default.
Habilidad::Habilidad(){
}

//Constructor parametrizado de la clase Habilidad. Crea objetos con valores definidos.
Habilidad::Habilidad(string _nombre, string _efecto, int _modificador, int _poder){
    nombre = _nombre;
    efecto = _efecto;
    modificador = _modificador;
    poder = _poder;
}

//Regresa una cadena de texto con la información de los atributos de la Habilidad.
//El método está marcado como const, indicando que no modifica el estado del objeto.
//Esto es esencial cuando se llama esta función en instancias de Habilidad constantes.
string Habilidad::getInfo() const{
    string mensaje = "";
    mensaje += "- Nombre: " + nombre;
    mensaje += "\n- Poder: " + to_string(poder);
    mensaje += "\n- Efecto: " + efecto;
    mensaje += "\n- Cantidad Efecto: " + to_string(modificador) + "\n";
    return mensaje;
}

//Regresa el nombre de la Habilidad.
//El método está marcado como const, indicando que no modifica el estado del objeto.
//Esto es esencial cuando se llama esta función en instancias de Habilidad constantes.
string Habilidad::getNombre() const{
    return nombre;
}

//Regresa el tipo de efecto que tiene la Habilidad.
string Habilidad::getEfecto(){
    return efecto;
}

//Regresa la cantidad de modificador de efecto que provee la Habilidad.
int Habilidad::getModificador(){
    return modificador;
}

//Regresa la cantidad de poder que tiene la Habilidad.
int Habilidad::getPoder(){
    return poder;
}

//Regresa un mensaje descriptivo sobre el ataque realizado por la Habilidad.
string Habilidad::aplicarAtaque(){
    return "- La habilidad " + nombre + " realiza " + to_string(poder) + " puntos de daño";
}

//Regresa un mensaje descriptivo sobre el efecto que aplica la Habilidad.
string Habilidad::aplicarEfecto(){
    return "- Se aplico el efecto " + efecto + " sobre ";
}
