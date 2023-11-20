#include <iostream>

using namespace std;

class Herramienta{

    private:
        string nombre;
        string efecto;
        int modificador;

    public:
        Herramienta();
        Herramienta(string, string, int);
        string getNombre();
        string getEfecto();
        int getModificador();
        string aplicarEfecto();

};
