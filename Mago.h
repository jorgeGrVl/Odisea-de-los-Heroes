#include "Guerrero.cpp"
#include <iostream>

using namespace std;

class Mago : public Personaje{

    private:
        string clase = "Mago";
        int recuperacion = 5;

    public:
        Mago();
        Mago(string, int, int, int, int, Habilidad, Herramienta);
        string getClase();
        void recibeRecuperacion();

};
