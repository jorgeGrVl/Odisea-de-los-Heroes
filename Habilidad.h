#include <iostream>

using namespace std;

//Clase que forma parte de los atributos de la clase Personaje mediante una relación de composición.
class Habilidad{

    private: //Atributos
        string nombre;
        string efecto;
        int modificador;
        int poder;

    public: //Métodos
        Habilidad();
        Habilidad(string, string, int, int);
        string getInfo() const;
        string getNombre() const;
        string getEfecto();
        int getModificador();
        int getPoder();
        string aplicarAtaque();
        string aplicarEfecto();

};
