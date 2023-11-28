#include "Personaje.h"
#include <iostream>

using namespace std;

//Constructor predeterminado de la clase Personaje. Crea objetos con valores default.
Personaje::Personaje(){
}

//Constructor parametrizado de la clase Personaje. Crea objetos con valores definidos.
Personaje::Personaje(string _nombre, int _vida, int _fuerza, int _defensa, int _velocidad,
                     Habilidad _habilidad, Herramienta _herramienta){
    nombre = _nombre;
    vida = _vida;
    fuerza = _fuerza;
    defensa = _defensa;
    velocidad = _velocidad;
    habilidad = _habilidad;
    herramienta = _herramienta;
}

//Regresa una cadena de texto con la información de los atributos del personaje.
//El método está marcado como const, indicando que no modifica el estado del objeto.
//Esto es esencial cuando se llama esta función en instancias de Personaje constantes.
string Personaje::getInfo() const{
    string mensaje = "";
    mensaje += "- Nombre: " + nombre;
    mensaje += "\n- Vida: " + to_string(vida);
    mensaje += "\n- Fuerza: " + to_string(fuerza);
    mensaje += "\n- Defensa: " + to_string(defensa);
    mensaje += "\n- Velocidad: " + to_string(velocidad);
    mensaje += "\n- Habilidad: " + habilidad.getNombre();
    mensaje += "\n- Herramienta: " + herramienta.getNombre() + "\n";
    return mensaje;
}

//Regresa el nombre del personaje.
//El método está marcado como const, indicando que no modifica el estado del objeto.
//Esto es esencial cuando se llama esta función en instancias de Personaje constantes.
string Personaje::getNombre() const{
    return nombre;
}

//Regresa la cantidad de puntos de vida del personaje.
int Personaje::getVida(){
    return vida;
}

//Regresa la cantidad de puntos de fuerza del personaje.
int Personaje::getFuerza(){
    return fuerza;
}

//Regresa la cantidad de puntos de defensa del personaje.
int Personaje::getDefensa(){
    return defensa;
}

//Regresa la cantidad de puntos de velocidad del personaje.
int Personaje::getVelocidad(){
    return velocidad;
}

//Devuelve el objeto de la clase Habilidad asociado al personaje.
Habilidad Personaje::getHabilidad(){
    return habilidad;
}

//Devuelve el objeto de la clase Herramienta asociado al personaje.
Herramienta Personaje::getHerramienta(){
    return herramienta;
}

//Establece un nuevo nombre al personaje.
void Personaje::setNombre(string _nombre){
    nombre = _nombre;
}

//Establece una nueva cantidad de puntos de vida al personaje.
void Personaje::setVida(int _vida){
    vida = _vida;
}

//Establece una nueva cantidad de puntos de fuerza al personaje.
void Personaje::setFuerza(int _fuerza){
    fuerza = _fuerza;
}

//Establece una nueva cantidad de puntos de defensa al personaje.
void Personaje::setDefensa(int _defensa){
    defensa = _defensa;
}

//Establece una nueva cantidad de puntos de velocidad al personaje.
void Personaje::setVelocidad(int _velocidad){
    velocidad = _velocidad;
}

//Establece un nuevo objeto de la clase Habilidad al personaje.
void Personaje::setHabilidad(Habilidad _habilidad){
    habilidad = _habilidad;
}

//Establece un nuevo objeto de la clase Herramienta al personaje.
void Personaje::setHerramienta(Herramienta _herramienta){
    herramienta = _herramienta;
}

//Comprueba si el personaje está vivo y regresa un valor booleano.
bool Personaje::compruebaVida(){
    return vida > 0;
}

//Establece la vida del personaje en 0 y regresa una cadena indicando que ha muerto.
string Personaje::morir(){
    vida = 0;
    return "- " + nombre + " ha muerto\n";
}

//Aplica el efecto de una herramienta al personaje y regresa una cadena descriptiva.
string Personaje::recibirEfecto(Herramienta herramienta){
    string mensaje = "";
    string efecto = getHerramienta().getEfecto();
    mensaje+= "- " + nombre + " equipo la herramienta " + herramienta.getNombre() + "\n";
    if(efecto == "Aumento de Vida"){
        vida = vida + getHerramienta().getModificador();
        mensaje += getHerramienta().aplicarEfecto() + nombre + "\n";
        mensaje += "- La vida de " + nombre + " aumento a " + to_string(vida);
    }
    else if(efecto == "Aumento de Fuerza"){
        fuerza = fuerza + getHerramienta().getModificador();
        mensaje += getHerramienta().aplicarEfecto() + nombre + "\n";
        mensaje += "- La fuerza de " + nombre + " aumento a " + to_string(fuerza);
    }
    else if(efecto == "Aumento de Defensa"){
        defensa = defensa + getHerramienta().getModificador();
        mensaje += getHerramienta().aplicarEfecto() + nombre + "\n";
        mensaje += "- La defensa de " + nombre + " aumento a " + to_string(defensa);
    }
    else if(efecto == "Aumento de Velocidad"){
        velocidad = velocidad + getHerramienta().getModificador();
        mensaje += getHerramienta().aplicarEfecto() + nombre + "\n";
        mensaje += "- La velocidad de " + nombre + " aumento a " + to_string(velocidad);
    }
    else{
        mensaje += "- La herramienta no proporciona ningun efecto";
    }
    mensaje += "\n";
    return mensaje;
}

//Calcula el valor del ataque del personaje, considerando su fuerza y la defensa del enemigo.
//Regresa la cantidad de daño que hará el personaje, utilizando una habilidad, al enemigo.
int Personaje::calculaAtaque(Personaje& enemigo){
    int ataque = fuerza + getHabilidad().getPoder() - enemigo.defensa;
    return ataque;
}

//Aplica el efecto de una habilidad al enemigo y regresa un mensaje descriptivo.
string Personaje::lanzaEfecto(Personaje& enemigo){
    string mensaje = "";
    string efecto = getHabilidad().getEfecto();
    if(efecto == "Ralentizacion"){
        enemigo.velocidad = enemigo.velocidad - getHabilidad().getModificador();
        mensaje += getHabilidad().aplicarEfecto() + enemigo.nombre + "\n";
        mensaje += "- La velocidad de " + enemigo.nombre + " se reducio a " + to_string(enemigo.velocidad);
    }
    else if(efecto == "Reduccion de Defensa"){
        enemigo.defensa = enemigo.defensa - getHabilidad().getModificador();
        mensaje += getHabilidad().aplicarEfecto() + enemigo.nombre + "\n";
        mensaje += "- La defensa de " + enemigo.nombre + " se reducio a " + to_string(enemigo.defensa);
    }
    else if(efecto == "Reduccion de Fuerza"){
        enemigo.fuerza = enemigo.fuerza - getHabilidad().getModificador();
        mensaje += getHabilidad().aplicarEfecto() + enemigo.nombre + "\n";
        mensaje += "- La fuerza de " + enemigo.nombre + " se reducio a " + to_string(enemigo.fuerza);
    }
    else{
        mensaje += "- La habilidad no tiene ningun efecto secundario";
    }
    mensaje += "\n";
    return mensaje;
}

//Realiza un ataque, calcula el daño, y aplica el efecto de la habilidad contra el enemigo.
//Este método hace uso de algunos de los métodos anteriores. Regresa un mensaje descriptivo.
string Personaje::lanzaAtaque(Personaje& enemigo){
    string mensaje = "";
    int ataque = calculaAtaque(enemigo);
    enemigo.vida = enemigo.vida - ataque;
    mensaje += "- " + nombre + " ha utilizado la habilidad " + habilidad.getNombre() + "\n";
    mensaje += getHabilidad().aplicarAtaque() + "\n";
    mensaje += "- " + nombre + " ha realizado " + to_string(ataque) + " puntos de daño a " + enemigo.nombre + "\n";
    mensaje += lanzaEfecto(enemigo);
    if(enemigo.compruebaVida()){
        mensaje += "- Vida de " + enemigo.nombre + ": " + to_string(enemigo.vida) + "\n";
    }
    else{
        mensaje += enemigo.morir();
    }
    return mensaje;
}
