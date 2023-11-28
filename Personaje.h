#include "Habilidad.cpp"
#include "Herramienta.cpp"
#include <iostream>

using namespace std;

//Clase Base del Proyecto.
class Personaje{

    protected: //Atributos
        string nombre;
        int vida;
        int fuerza;
        int defensa;
        int velocidad;
        Habilidad habilidad;
        Herramienta herramienta;

    public: //Métodos
        Personaje();
        Personaje(string, int, int, int, int, Habilidad, Herramienta);
        string getInfo() const;
        string getNombre() const;
        int getVida();
        int getFuerza();
        int getDefensa();
        int getVelocidad();
        Habilidad getHabilidad();
        Herramienta getHerramienta();
        void setNombre(string);
        void setVida(int);
        void setFuerza(int);
        void setDefensa(int);
        void setVelocidad(int);
        void setHabilidad(Habilidad);
        void setHerramienta(Herramienta);
        bool compruebaVida();
        string morir();
        string recibirEfecto(Herramienta);
        int calculaAtaque(Personaje&);
        string lanzaEfecto(Personaje&);
        string lanzaAtaque(Personaje&);
};
