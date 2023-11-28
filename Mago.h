#include "Guerrero.cpp"
#include <iostream>

using namespace std;

//Subclase de la clase Personaje mediante una relación de herencia.
class Mago : public Personaje{

    private: //Atributos
        string clase = "Mago";
        int recuperacion = 5;

    public: //Métodos
        Mago();
        Mago(string, int, int, int, int, Habilidad, Herramienta);
        string getClase();
        string recibeRecuperacion();

};
