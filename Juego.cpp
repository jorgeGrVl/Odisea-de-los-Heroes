#include "Mago.cpp"
#include <iostream>
#include <list>

using namespace std;

//Función que crea un guerrero, solicitando al usuario que ingrese los atributos del mismo.
Guerrero creaGuerrero(const list<Habilidad>& habilidades, const list<Herramienta>& herramientas){
    string nombre;
    int vida, fuerza, defensa, velocidad;
    Habilidad habilidad;
    Herramienta herramienta;

    cout << "\nIngrese el nombre del personaje: ";
    getline(cin >> ws, nombre);

    int puntosRestantes = 50;
    cout << "\nTiene " << puntosRestantes << " puntos de atributo para distribuirlos en su personaje" << endl;
    do{
        asignarVida:
        cout << "Ingrese la vida del personaje: ";
        cin >> vida;
        if(vida < 0 || vida > puntosRestantes){
            cout << "\nValor Invalido: Solo le quedan " << puntosRestantes << " puntos de atributo restantes" << endl;
            cout << "Por favor ingrese un valor mayor o igual a 0 y menor a " << puntosRestantes + 1 << endl;
            goto asignarVida;
        }
        puntosRestantes -= vida;

        cout << "\nLe quedan " << puntosRestantes << " puntos de atributo restantes" << endl;
        asignarFuerza:
        cout << "Ingrese la fuerza del personaje: ";
        cin >> fuerza;
        if(fuerza < 0 || fuerza > puntosRestantes){
            cout << "\nValor Invalido: Solo le quedan " << puntosRestantes << " puntos de atributo restantes" << endl;
            cout << "Por favor ingrese un valor mayor o igual a 0 y menor a " << puntosRestantes + 1 << endl;
            goto asignarFuerza;
        }
        puntosRestantes -= fuerza;

        cout << "\nLe quedan " << puntosRestantes << " puntos de atributo restantes" << endl;
        asignarDefensa:
        cout << "Ingrese la defensa del personaje: ";
        cin >> defensa;
        if(defensa < 0 || defensa > puntosRestantes){
            cout << "\nValor Invalido: Solo le quedan " << puntosRestantes << " puntos de atributo restantes" << endl;
            cout << "Por favor ingrese un valor mayor o igual a 0 y menor a " << puntosRestantes + 1 << endl;
            goto asignarDefensa;
        }
        puntosRestantes -= defensa;

        cout << "\nLe quedan " << puntosRestantes << " puntos de atributo restantes" << endl;
        asignarVelocidad:
        cout << "Ingrese la velocidad del personaje: ";
        cin >> velocidad;
        if(velocidad < 0 || velocidad > puntosRestantes){
            cout << "\nValor Invalido: Solo le quedan " << puntosRestantes << " puntos de atributo restantes" << endl;
            cout << "Por favor ingrese un valor mayor o igual a 0 y menor a " << puntosRestantes + 1 << endl;
            goto asignarVelocidad;
        }
        puntosRestantes -= velocidad;

        if(puntosRestantes > 0){
            cout << "\nLe sobraron " << puntosRestantes << " puntos de atributo " << endl;
            cout << "Su personaje sera mas debil de lo normal" << endl;
            puntosRestantes = 0;
        }

    } while(puntosRestantes > 0);
    puntosRestantes = 50;

    int numero = 1;
    cout << "\nHABILIDADES DISPONIBLES:\n";
    for(const auto& habilidad : habilidades){
        cout << numero << ". " << habilidad.getNombre() << endl;
        numero++;
    }
    int nHabilidad;
    cout << "\nSeleccione la habilidad de su personaje: ";
    cin >> nHabilidad;
    if(nHabilidad <= 4 && nHabilidad >= 0){
        auto itHab = next(habilidades.begin(), nHabilidad - 1);
        habilidad = *itHab;
    }
    else{
        habilidad = Habilidad("Sin Habilidad", "Ninguno", 0, 0);
        cout << "Opcion Invalida" << endl;
        cout << "No se selecciono ninguna habilidad" << endl;
    }

    numero = 1;
    cout << "\nHERRAMIENTAS DISPONIBLES:\n";
    for(const auto& herramienta : herramientas){
        cout << numero << ". " << herramienta.getNombre() << endl;
        numero++;
    }
    int nHerramienta;
    cout << "\nSeleccione la herramienta de su personaje: ";
    cin >> nHerramienta;
    if(nHerramienta <= 4 && nHerramienta >= 0){
        auto itHab = next(herramientas.begin(), nHerramienta - 1);
        herramienta = *itHab;
    }
    else{
        herramienta = Herramienta("Sin Herramienta", "Ninguno", 0);
        cout << "Opcion Invalida" << endl;
        cout << "No se selecciono ninguna herramienta" << endl;
    }

    cout << "\nPERSONAJE CREADO EXITOSAMENTE" << endl;

    return Guerrero(nombre, vida, fuerza, defensa, velocidad, habilidad, herramienta);
}

//Función que crea un mago, solicitando al usuario que ingrese los atributos del mismo.
Mago creaMago(const list<Habilidad>& habilidades, const list<Herramienta>& herramientas){
    string nombre;
    int vida, fuerza, defensa, velocidad;
    Habilidad habilidad;
    Herramienta herramienta;

    cout << "\nIngrese el nombre del personaje: ";
    getline(cin >> ws, nombre);

    int puntosRestantes = 50;
    cout << "\nTiene " << puntosRestantes << " puntos de atributo para distribuirlos en su personaje" << endl;
    do{
        asignarVida:
        cout << "Ingrese la vida del personaje: ";
        cin >> vida;
        if(vida < 0 || vida > puntosRestantes){
            cout << "\nValor Invalido: Solo le quedan " << puntosRestantes << " puntos de atributo restantes" << endl;
            cout << "Por favor ingrese un valor mayor o igual a 0 y menor a " << puntosRestantes + 1 << endl;
            goto asignarVida;
        }
        puntosRestantes -= vida;

        cout << "\nLe quedan " << puntosRestantes << " puntos de atributo restantes" << endl;
        asignarFuerza:
        cout << "Ingrese la fuerza del personaje: ";
        cin >> fuerza;
        if(fuerza < 0 || fuerza > puntosRestantes){
            cout << "\nValor Invalido: Solo le quedan " << puntosRestantes << " puntos de atributo restantes" << endl;
            cout << "Por favor ingrese un valor mayor o igual a 0 y menor a " << puntosRestantes + 1 << endl;
            goto asignarFuerza;
        }
        puntosRestantes -= fuerza;

        cout << "\nLe quedan " << puntosRestantes << " puntos de atributo restantes" << endl;
        asignarDefensa:
        cout << "Ingrese la defensa del personaje: ";
        cin >> defensa;
        if(defensa < 0 || defensa > puntosRestantes){
            cout << "\nValor Invalido: Solo le quedan " << puntosRestantes << " puntos de atributo restantes" << endl;
            cout << "Por favor ingrese un valor mayor o igual a 0 y menor a " << puntosRestantes + 1 << endl;
            goto asignarDefensa;
        }
        puntosRestantes -= defensa;

        cout << "\nLe quedan " << puntosRestantes << " puntos de atributo restantes" << endl;
        asignarVelocidad:
        cout << "Ingrese la velocidad del personaje: ";
        cin >> velocidad;
        if(velocidad < 0 || velocidad > puntosRestantes){
            cout << "\nValor Invalido: Solo le quedan " << puntosRestantes << " puntos de atributo restantes" << endl;
            cout << "Por favor ingrese un valor mayor o igual a 0 y menor a " << puntosRestantes + 1 << endl;
            goto asignarVelocidad;
        }
        puntosRestantes -= velocidad;

        if(puntosRestantes > 0){
            cout << "\nLe sobraron " << puntosRestantes << " puntos de atributo " << endl;
            cout << "Su personaje sera mas debil de lo normal" << endl;
            puntosRestantes = 0;
        }

    } while(puntosRestantes > 0);
    puntosRestantes = 50;

    int numero = 1;
    cout << "\nHABILIDADES DISPONIBLES:\n";
    for(const auto& habilidad : habilidades){
        cout << numero << ". " << habilidad.getNombre() << endl;
        numero++;
    }
    int nHabilidad;
    cout << "\nSeleccione la habilidad de su personaje: ";
    cin >> nHabilidad;
    if(nHabilidad <= 4 && nHabilidad >= 0){
        auto itHab = next(habilidades.begin(), nHabilidad - 1);
        habilidad = *itHab;
    }
    else{
        habilidad = Habilidad("Sin Habilidad", "Ninguno", 0, 0);
        cout << "Opcion Invalida" << endl;
        cout << "No se selecciono ninguna habilidad" << endl;
    }

    numero = 1;
    cout << "\nHERRAMIENTAS DISPONIBLES:\n";
    for(const auto& herramienta : herramientas){
        cout << numero << ". " << herramienta.getNombre() << endl;
        numero++;
    }
    int nHerramienta;
    cout << "\nSeleccione la herramienta de su personaje: ";
    cin >> nHerramienta;
    if(nHerramienta <= 4 && nHerramienta >= 0){
        auto itHab = next(herramientas.begin(), nHerramienta - 1);
        herramienta = *itHab;
    }
    else{
        herramienta = Herramienta("Sin Herramienta", "Ninguno", 0);
        cout << "Opcion Invalida" << endl;
        cout << "No se selecciono ninguna herramienta" << endl;
    }

    cout << "\nPERSONAJE CREADO EXITOSAMENTE" << endl;

    return Mago(nombre, vida, fuerza, defensa, velocidad, habilidad, herramienta);
}

//Función que imprime la información de los personajes creados, tanto guerreros como magos.
void imprimeInfoPersonajes(const list<Guerrero>& misGuerreros, const list<Mago>& misMagos){
    int numero = 1;
    cout << "GUERREROS CREADOS\n" << endl;
    if(misGuerreros.empty()){
        cout << "No ha creado ningun guerrero\n" << endl;
    }
    else{
        for(const auto& guerrero : misGuerreros){
            cout << "GUERRERO " << numero << endl;
            cout << guerrero.getInfo() << endl;
            numero++;
        }
    }
    numero = 1;
    cout << "MAGOS CREADOS\n" << endl;
    if(misMagos.empty()){
        cout << "No ha creado ningun mago" << endl;
    }
    else{
        for(const auto& mago : misMagos){
            cout << "MAGO " << numero << endl;
            cout << mago.getInfo();
            numero++;
        }
    }
}

//Función que imprime la información de las habilidades disponibles para los personajes.
void imprimeInfoHabilidades(const list<Habilidad>& habilidades){
    int numero = 1;
    cout << "INFORMACION DE HABILIDADES" << endl;
    for(const auto& habilidad : habilidades){
        cout << "\nHABILIDAD " << numero << endl;
        cout << habilidad.getInfo();
        numero++;
    }
}

//Función que imprime la información de las herramientas disponibles para los personajes.
void imprimeInfoHerramientas(const list<Herramienta>& herramientas){
    int numero = 1;
    cout << "INFORMACION DE HERRAMIENTAS" << endl;
    for(const auto& herramienta : herramientas){
        cout << "\nHERRAMIENTA " << numero << endl;
        cout << herramienta.getInfo();
        numero++;
    }
}

// Función que imprime el menú principal del juego.
void menu(){
    cout << "\n----------------------" << endl;
    cout << "1. Jugar" << endl;
    cout << "2. Crear Personaje" << endl;
    cout << "3. Personajes Creados" << endl;
    cout << "4. Info Habilidades" << endl;
    cout << "5. Info Herramientas" << endl;
    cout << "6. Salir" << endl;
    cout << "----------------------" << endl;
}

// Función que permite al usuario seleccionar un personaje para jugar, ya sea guerrero o mago.
void seleccionarPersonaje(const list<Guerrero>& misGuerreros, const list<Mago>& misMagos, Guerrero& jugadorGuerrero, Mago& jugadorMago) {
    int opcion;
    cout << "SELECCIONAR PERSONAJE PARA JUGAR\n";
    if (!misGuerreros.empty() || !misMagos.empty()) {
        cout << "\nPERSONAJES DISPONIBLES:\n";

        int numero = 1;
        cout << "\nGUERREROS\n";
        if(misGuerreros.empty()){
            cout << "No ha creado ningun guerrero" << endl;
        }
        else{
            for (const auto& guerrero : misGuerreros) {
                cout << numero << ". " << guerrero.getNombre() << endl;
                numero++;
            }
        }

        cout << "\nMAGOS\n";
        if(misMagos.empty()){
            cout << "No ha creado ningun mago" << endl;
        }
        else{
            for (const auto& mago : misMagos) {
                cout << numero << ". " << mago.getNombre() << endl;
                numero++;
            }
        }

        cout << "\nSeleccione el numero del personaje seleccionado: ";
        cin >> opcion;

        if (opcion > 0 && opcion <= misGuerreros.size()) {
            auto itGuerrero = next(misGuerreros.begin(), opcion - 1);
            jugadorGuerrero = *itGuerrero;
        } else if (opcion > misGuerreros.size() && opcion <= (misGuerreros.size() + misMagos.size())) {
            auto itMago = next(misMagos.begin(), opcion - 1 - misGuerreros.size());
            jugadorMago = *itMago;
        } else {
            cout << "\nOpcion Invalida" << endl;
            cout << "No se ha seleccionado ningun personaje para jugar\n" << endl;
        }
    }
}

// Función principal que contiene la lógica del juego.
//Incluye la interacción con el usuario y la ejecución de turnos.
int main(){

    list<Guerrero> misGuerreros;
    list<Mago> misMagos;

    Habilidad habilidad1("Golpe Certero", "Sin Efecto", 0, 10);
    Habilidad habilidad2("Rafaga Gelida", "Ralentizacion", 2, 5);
    Habilidad habilidad3("Asalto Desgarrador", "Reduccion de Defensa", 1, 7);
    Habilidad habilidad4("Desgaste Fisico", "Reduccion de Fuerza", 1, 5);
    list<Habilidad> habilidades = {habilidad1, habilidad2, habilidad3, habilidad4};

    Herramienta herramienta1("Elixir de Vitalidad", "Aumento de Vida", 10);
    Herramienta herramienta2("Espada del Caos", "Aumento de Fuerza", 5);
    Herramienta herramienta3("Coraza del Valor", "Aumento de Defensa", 3);
    Herramienta herramienta4("Botas del Viento", "Aumento de Velocidad", 5);
    list<Herramienta> herramientas = {herramienta1, herramienta2, herramienta3, herramienta4};

    Mago enemigo1("Ricardo el Malvado", 30, 8, 3, 5, habilidad3, herramienta1);

    int opcion, x = 0;
    cout << "\nODISEA DE LOS HEROES" << endl;
    while(x==0){
        menu();
        cout << endl << "Seleccione una opcion: ";
        cin >> opcion;
        cout << endl;
        if(opcion == 1){
            if(misGuerreros.empty() && misMagos.empty()){
                cout << "Primero debe crear al menos un personaje" << endl;
            }
            else{
            Guerrero jugadorG;
            Mago jugadorM;
            seleccionarPersonaje(misGuerreros, misMagos, jugadorG, jugadorM);
            Mago enemigo = enemigo1;
            int turno = 1;
            if(jugadorG.getNombre() != ""){
                cout << "\n-----------------------------------------------";
                cout << "\n" << jugadorG.getNombre() << " VS " << enemigo.getNombre() << endl;
                cout << "\nHERRAMIENTAS" << endl <<endl;
                cout << jugadorG.recibirEfecto(jugadorG.getHerramienta());
                cout << endl;
                cout << enemigo.recibirEfecto(enemigo.getHerramienta());
                cout << endl;
                while(jugadorG.compruebaVida() && enemigo.compruebaVida()){
                    cout << "TURNO " << turno << endl;
                    cout << jugadorG.recibeFuria();
                    cout << enemigo.recibeRecuperacion();
                    cout << endl;
                    seleccionarOpcion:
                    int opc;
                    cout << "1. Atacar\n2.Ver atributos\n";
                    cout << "\nSeleccione una opcion: ";
                    cin >> opc;
                    if(opc == 1){
                        if(jugadorG.getVelocidad() <= enemigo.getVelocidad()){
                            cout << "\n" << enemigo.lanzaAtaque(jugadorG);
                            if(jugadorG.compruebaVida()){
                                cout << "\n" << jugadorG.lanzaAtaque(enemigo);
                            }
                        }
                        else{
                            cout << "\n" << jugadorG.lanzaAtaque(enemigo);
                            if(enemigo.compruebaVida()){
                                cout << "\n" << enemigo.lanzaAtaque(jugadorG);
                            }

                        }
                        cout << endl;
                        turno = turno + 1;
                    }
                    else if(opc == 2){
                        cout << "\nJUGADOR" << endl;
                        cout << jugadorG.getInfo() << endl;
                        cout << "ENEMIGO" << endl;
                        cout << enemigo.getInfo() << endl;
                        goto seleccionarOpcion;
                    }
                    else{
                        cout << "Opcion Invalida";
                        goto seleccionarOpcion;
                    }
                }
            }
            else if(jugadorM.getNombre() != ""){
                cout << "\n-----------------------------------------------";
                cout << "\n" << jugadorM.getNombre() << " VS " << enemigo.getNombre() << endl;
                cout << "\nHERRAMIENTAS" << endl <<endl;
                cout << jugadorM.recibirEfecto(jugadorM.getHerramienta());
                cout << endl;
                cout << enemigo.recibirEfecto(enemigo.getHerramienta());
                cout << endl;
                while(jugadorM.compruebaVida() && enemigo.compruebaVida()){
                    cout << "TURNO " << turno << endl;
                    cout << jugadorM.recibeRecuperacion();
                    cout << enemigo.recibeRecuperacion();
                    cout << endl;
                    seleccionarOpc:
                    int opc;
                    cout << "1. Atacar\n2.Ver atributos\n";
                    cout << "\nSeleccione una opcion: ";
                    cin >> opc;
                    if(opc == 1){
                        if(jugadorM.getVelocidad() <= enemigo.getVelocidad()){
                            cout << "\n" << enemigo.lanzaAtaque(jugadorM);
                            if(jugadorM.compruebaVida()){
                                cout << "\n" << jugadorM.lanzaAtaque(enemigo);
                            }
                        }
                        else{
                            cout << "\n" << jugadorM.lanzaAtaque(enemigo);
                            if(enemigo.compruebaVida()){
                                cout << "\n" << enemigo.lanzaAtaque(jugadorM);
                            }

                        }
                        cout << endl;
                        turno = turno + 1;
                    }
                    else if(opc == 2){
                        cout << "\nJUGADOR" << endl;
                        cout << jugadorM.getInfo() << endl;
                        cout << "ENEMIGO" << endl;
                        cout << enemigo.getInfo() << endl;
                        goto seleccionarOpc;
                    }
                    else{
                        cout << "Opcion Invalida";
                        goto seleccionarOpc;
                    }
                }
            }
             cout << "FIN DEL JUEGO" << endl;
             cout << "-----------------------------------------------" << endl;
        }
}
        else if(opcion == 2){
            int clase, x = 0;
            seleccionarClase:
            cout << "CLASES\n 1. Guerrero\n 2. Mago" << endl;
            cout << "\nSeleccione el numero de la clase de su personaje: ";
            cin >> clase;
            if(clase == 1){
                misGuerreros.push_back(creaGuerrero(habilidades, herramientas));
            }
            else if(clase == 2){
                misMagos.push_back(creaMago(habilidades, herramientas));
            }
            else{
                cout << "\nClase invalida: Por favor seleccione la clase 1 o la clase 2\n" << endl;
                goto seleccionarClase;
            }
        }
        else if(opcion == 3){
            if(misGuerreros.empty() && misMagos.empty()){
                cout << "Aun no ha creado ningun personaje" << endl;
            }
            else{
                imprimeInfoPersonajes(misGuerreros, misMagos);
            }
        }
        else if(opcion == 4){
            imprimeInfoHabilidades(habilidades);
        }
        else if(opcion == 5){
            imprimeInfoHerramientas(herramientas);
        }
        else if(opcion == 6){
            cout << "Gracias por jugar!\nVuelva pronto :)" << endl;
            x = 1;
        }
        else{
            cout << "Opcion Invalida" << endl;
            cout << "Por favor seleccione otra opcion" << endl;
        }
}

    return 0;
}
