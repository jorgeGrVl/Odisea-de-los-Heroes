#include "Personaje.h"
#include <iostream>

using namespace std;

Personaje::Personaje(){
}

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

string Personaje::getNombre(){
    return nombre;
}

int Personaje::getVida(){
    return vida;
}

int Personaje::getFuerza(){
    return fuerza;
}

int Personaje::getDefensa(){
    return defensa;
}

int Personaje::getVelocidad(){
    return velocidad;
}

Habilidad Personaje::getHabilidad(){
    return habilidad;
}

Herramienta Personaje::getHerramienta(){
    return herramienta;
}

void Personaje::setNombre(string _nombre){
    nombre = _nombre;
}

void Personaje::setVida(int _vida){
    vida = _vida;
}

void Personaje::setFuerza(int _fuerza){
    fuerza = _fuerza;
}

void Personaje::setDefensa(int _defensa){
    defensa = _defensa;
}

void Personaje::setVelocidad(int _velocidad){
    velocidad = _velocidad;
}

void Personaje::setHabilidad(Habilidad _habilidad){
    habilidad = _habilidad;
}

void Personaje::setHerramienta(Herramienta _herramienta){
    herramienta = _herramienta;
}

bool Personaje::compruebaVida(){
    return vida > 0;
}

void Personaje::morir(){
    vida = 0;
    cout << "- " << nombre << " ha muerto" << endl;
}

void Personaje::recibirEfecto(Herramienta herramienta){
    string efecto = getHerramienta().getEfecto();
    cout << "- " << nombre << " equipo la herramienta " << herramienta.getNombre() << endl;
    if(efecto == "Aumento de Vida"){
        vida = vida + getHerramienta().getModificador();
        cout << getHerramienta().aplicarEfecto() << nombre << endl;
        cout << "- La vida de " << nombre << " aumento a " << vida;
    }
    else if(efecto == "Aumento de Fuerza"){
        fuerza = fuerza + getHerramienta().getModificador();
        cout << getHerramienta().aplicarEfecto() << nombre << endl;
        cout << "- La fuerza de " << nombre << " aumento a " << fuerza;
    }
    else if(efecto == "Aumento de Defensa"){
        defensa = defensa + getHerramienta().getModificador();
        cout << getHerramienta().aplicarEfecto() << nombre << endl;
        cout << "- La defensa de " << nombre << " aumento a " << defensa;
    }
    else if(efecto == "Aumento de Velocidad"){
        velocidad = velocidad + getHerramienta().getModificador();
        cout << getHerramienta().aplicarEfecto() << nombre << endl;
        cout << "- La velocidad de " << nombre << " aumento a " << velocidad;
    }
    else{
        cout << "- La herramienta no proporciona ningun efecto";
    }
    cout << endl;
}

int Personaje::calculaAtaque(Personaje& enemigo){
    int ataque = fuerza + getHabilidad().getPoder() - enemigo.defensa;
    return ataque;
}

void Personaje::lanzaEfecto(Personaje& enemigo){
    string efecto = getHabilidad().getEfecto();
    if(efecto == "Ralentizacion"){
        enemigo.velocidad = enemigo.velocidad - getHabilidad().getModificador();
        cout << getHabilidad().aplicarEfecto() << enemigo.nombre << endl;
        cout << "- La velocidad de " << enemigo.nombre << " se reducio a " << enemigo.velocidad;
    }
    else if(efecto == "Reduccion de Defensa"){
        enemigo.defensa = enemigo.defensa - getHabilidad().getModificador();
        cout << getHabilidad().aplicarEfecto() << enemigo.nombre << endl;
        cout << "- La defensa de " << enemigo.nombre << " se reducio a " << enemigo.defensa;
    }
    else if(efecto == "Reduccion de Fuerza"){
        enemigo.fuerza = enemigo.fuerza - getHabilidad().getModificador();
        cout << getHabilidad().aplicarEfecto() << enemigo.nombre << endl;
        cout << "- La fuerza de " << enemigo.nombre << " se reducio a " << enemigo.fuerza;
    }
    else{
        cout << "- La habilidad no tiene ningun efecto secundario";
    }
    cout << endl;
}

void Personaje::lanzaAtaque(Personaje& enemigo){
    int ataque = calculaAtaque(enemigo);
    enemigo.vida = enemigo.vida - ataque;
    cout << "- " << nombre << " ha utilizado la habilidad " << habilidad.getNombre() << endl;
    cout << getHabilidad().aplicarAtaque() << endl;
    cout << "- " << nombre << " ha realizado " << ataque << " puntos de daño a " << enemigo.nombre << endl;
    lanzaEfecto(enemigo);
    if(enemigo.compruebaVida()){
        cout << "- Vida de " << enemigo.nombre << ": " << enemigo.vida << endl;
        cout << endl;
    }
    else{
        enemigo.morir();
    }
}

