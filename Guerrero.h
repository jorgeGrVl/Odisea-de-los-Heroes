#include "Personaje.cpp"
#include <iostream>

using namespace std;

//Subclase de la clase Personaje mediante una relación de herencia.
class Guerrero : public Personaje{

    private: //Atributos
        string clase = "Guerrero";
        int furia = 5;

    public: //Métodos
        Guerrero();
        Guerrero(string, int, int, int, int, Habilidad, Herramienta);
        string getClase();
        string recibeFuria();

};
