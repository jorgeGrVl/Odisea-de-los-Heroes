#include "Herramienta.h"
#include <iostream>

using namespace std;

//Constructor predeterminado de la clase Herramienta. Crea objetos con valores default.
Herramienta::Herramienta(){
}

//Constructor parametrizado de la clase Herramienta. Crea objetos con valores definidos.
Herramienta::Herramienta(string _nombre, string _efecto, int _modificador){
    nombre = _nombre;
    efecto = _efecto;
    modificador = _modificador;
}

//Regresa una cadena de texto con la información de los atributos de la Herramienta.
//El método está marcado como const, indicando que no modifica el estado del objeto.
//Esto es esencial cuando se llama esta función en instancias de Herramienta constantes.
string Herramienta::getInfo() const{
    string mensaje = "";
    mensaje += "- Nombre: " + nombre;
    mensaje += "\n- Efecto: " + efecto;
    mensaje += "\n- Cantidad Efecto: " + to_string(modificador) + "\n";
    return mensaje;
}

//Regresa el nombre de la Herramienta.
//El método está marcado como const, indicando que no modifica el estado del objeto.
//Esto es esencial cuando se llama esta función en instancias de Herramienta constantes.
string Herramienta::getNombre() const{
    return nombre;
}

//Regresa el tipo de efecto que tiene la Herramienta.
string Herramienta::getEfecto(){
    return efecto;
}

//Regresa la cantidad de modificador de efecto que provee la Herramienta.
int Herramienta::getModificador(){
    return modificador;
}

//Regresa un mensaje descriptivo sobre el efecto que aplica la Herramienta.
string Herramienta::aplicarEfecto(){
    return "- La herramienta " + nombre + " aplico el efecto " + efecto + " sobre ";
}
