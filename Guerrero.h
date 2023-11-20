#include "Personaje.cpp"
#include <iostream>

using namespace std;

class Guerrero : public Personaje{

    private:
        string clase = "Guerrero";
        int furia = 5;

    public:
        Guerrero();
        Guerrero(string, int, int, int, int, Habilidad, Herramienta);
        string getClase();
        void recibeFuria();

};
