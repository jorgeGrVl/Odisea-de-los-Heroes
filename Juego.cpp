#include "Mago.cpp"
#include <iostream>

using namespace std;

int main(){

    Herramienta herramienta1("Elixir de Vitalidad", "Aumento de Vida", 10);
    Herramienta herramienta2("Espada del Caos", "Aumento de Fuerza", 5);
    Herramienta herramienta3("Coraza del Valor", "Aumento de Defensa", 3);
    Herramienta herramienta4("Botas del Viento", "Aumento de Velocidad", 5);

    Habilidad habilidad1("Golpe Certero", "Sin Efecto", 0, 10);
    Habilidad habilidad2("Rafaga Gelida", "Ralentizacion", 2, 5);
    Habilidad habilidad3("Asalto Desgarrador", "Reduccion de Defensa", 1, 7);
    Habilidad habilidad4("Desgaste Fisico", "Reduccion de Fuerza", 1, 5);

    Guerrero jugador;
    jugador.setNombre("Jorge el Poderoso");
    jugador.setVida(30);
    jugador.setFuerza(10);
    jugador.setDefensa(5);
    jugador.setVelocidad(1);
    jugador.setHabilidad(habilidad4);
    jugador.setHerramienta(herramienta4);
    cout << "JUGADOR" << endl;
    cout << "Nombre: " << jugador.getNombre() << endl;
    cout << "Clase: " << jugador.getClase() << endl;
    cout << "Vida: " << jugador.getVida() << endl;
    cout << "Fuerza: " << jugador.getFuerza() << endl;
    cout << "Defensa: " << jugador.getDefensa() << endl;
    cout << "Velocidad: " << jugador.getVelocidad() << endl;
    cout << "Habilidad: " << jugador.getHabilidad().getNombre() << endl;

    cout << endl;

    Mago enemigo("Dan el Terrible", 30, 8, 3, 5, habilidad3, herramienta1);
    cout << "ENEMIGO" << endl;
    cout << "Nombre: " << enemigo.getNombre() << endl;
    cout << "Clase: " << enemigo.getClase() << endl;
    cout << "Vida: " << enemigo.getVida() << endl;
    cout << "Fuerza: " << enemigo.getFuerza() << endl;
    cout << "Defensa: " << enemigo.getDefensa() << endl;
    cout << "Velocidad: " << enemigo.getVelocidad() << endl;
    cout << "Habilidad: " << enemigo.getHabilidad().getNombre() << endl;

    cout << endl;

    int turno = 1;
    cout << "HERRAMIENTAS" << endl <<endl;
    jugador.recibirEfecto(jugador.getHerramienta());
    cout << endl;
    enemigo.recibirEfecto(enemigo.getHerramienta());
    cout << endl;
    while(jugador.compruebaVida() && enemigo.compruebaVida()){
        cout << "TURNO " << turno << endl;
        jugador.recibeFuria();
        enemigo.recibeRecuperacion();
        cout << endl;
        if(jugador.getVelocidad() <= enemigo.getVelocidad()){
            enemigo.lanzaAtaque(jugador);
            if(jugador.compruebaVida()){
                jugador.lanzaAtaque(enemigo);
            }
        }
        else{
            jugador.lanzaAtaque(enemigo);
            if(enemigo.compruebaVida()){
                enemigo.lanzaAtaque(jugador);
            }

        }
        cout << endl;
        turno = turno + 1;
    }

    cout << "FIN DEL JUEGO" << endl;

    return 0;
}
