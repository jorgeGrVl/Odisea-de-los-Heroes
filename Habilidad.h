#include <iostream>

using namespace std;

class Habilidad{

    private:
        string nombre;
        string efecto;
        int modificador;
        int poder;

    public:
        Habilidad();
        Habilidad(string, string, int, int);
        string getNombre();
        string getEfecto();
        int getModificador();
        int getPoder();
        string aplicarAtaque();
        string aplicarEfecto();

};
