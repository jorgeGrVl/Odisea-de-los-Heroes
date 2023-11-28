#include <iostream>

using namespace std;

//Clase que forma parte de los atributos de la clase Personaje mediante una relación de composición.
class Herramienta{

    private: //Atributos
        string nombre;
        string efecto;
        int modificador;

    public: //Métodos
        Herramienta();
        Herramienta(string, string, int);
        string getInfo() const;
        string getNombre() const;
        string getEfecto();
        int getModificador();
        string aplicarEfecto();

};
