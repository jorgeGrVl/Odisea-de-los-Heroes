#include "Habilidad.cpp"
#include "Herramienta.cpp"
#include <iostream>

using namespace std;

class Personaje{

    protected:
        string nombre;
        int vida;
        int fuerza;
        int defensa;
        int velocidad;
        Habilidad habilidad;
        Herramienta herramienta;

    public:
        Personaje();
        Personaje(string, int, int, int, int, Habilidad, Herramienta);
        string getNombre();
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
        void morir();
        void recibirEfecto(Herramienta);
        int calculaAtaque(Personaje&);
        void lanzaEfecto(Personaje&);
        void lanzaAtaque(Personaje&);
};
