# "Odisea de los Héroes"
### Introducción

En el emocionante mundo de la Programación Orientada a Objetos (POO), donde la creatividad y la lógica se entrelazan, decidí desarrollar un apasionante proyecto que relaciona los conceptos de este tipo de programación, con algo divertido, interactivo e interesante como lo son los videojuegos. Este proyecto, que introduce conceptos fundamentales de la POO a través de un juego de rol de combate por turnos, tiene la intención proporcionar una experiencia práctica y divertida para aplicar los conceptos aprendidos y a la par comprender cómo este tipo de programación se utiliza para modelar sistemas interactivos.

### Contexto | Juego de Rol

Un juego de rol es un tipo de videojuego que combina elementos narrativos y estratégicos, permitiendo a los jugadores asumir el papel de personajes ficticios en un mundo virtual. En este contexto, los jugadores toman decisiones estratégicas durante los combates, pero los eventos se desarrollan por turnos, lo que significa que cada jugador y enemigo tiene la oportunidad de realizar acciones en su propio turno. Este género de juegos ha sido popular durante décadas y ha evolucionado en términos de jugabilidad y complejidad.

En la creación de un juego de rol de combate por turnos, la Programación Orientada a Objetos (POO) desempeña un papel vital en varios aspectos clave. La POO permite modelar personajes y enemigos como objetos, donde cada objeto se convierte en una instancia de una clase que contiene atributos, como salud y habilidades,  y métodos, como atacar y defender, específicos. Además, la herencia y el polimorfismo facilitan la gestión de diversos personajes y enemigos con características comunes y diferencias particulares, lo que es esencial en la diversidad del juego. La interfaz de usuario, que incluye elementos como botones, ventanas y menús, también se crea utilizando principios de la POO al considerar cada elemento como un objeto con sus propios comportamientos. Finalmente, la gestión de eventos y turnos en  el juego se beneficia de la POO al diseñar un sistema que controla la secuencia de eventos y turnos de manera coherente, asegurando una experiencia de juego fluida y envolvente.

En resumen, un juego de rol de combate por turnos es un escenario ideal para aplicar los principios de la Programación Orientada a Objetos. Este tipo de programación facilita al usuario la creación, gestión y representación de entidades en el juego, así como la implementación de la lógica de juego, proporcionando una base sólida para el desarrollo de un proyecto interactivo y entretenido. Aunque este proyecto es introductorio a la POO y, por ende, relativamente básico, representa un emocionante paso hacia la comprensión de los principios fundamentales de la POO, así como de sus aplicaciones prácticas básicas.

### Descripción del Proyecto

El proyecto "Odisea de los Héroes" consiste en un programa desarrollado en el lenguaje de programación C++ que simula un juego de roles (RPG) donde los jugadores pueden crear y controlar personajes de dos clases diferentes: guerreros y magos. El juego incluye la capacidad de enfrentar a los personajes creados en batallas, seleccionar sus atributos, y obtener información detallada sobre ellos, sus habilidades y sus herramientas.

El propósito principal radica en ofrecer a los jugadores una experiencia de juego donde pueden personalizar las características de sus personajes, seleccionar habilidades y herramientas, y enfrentarlos en duelos estratégicos. Aunque no incorpora funcionalidades multijugador ni gráficos, se destaca por su capacidad de proporcionar información detallada.

Para utilizar el código, el usuario interactúa a través de un menú principal que presenta diversas opciones, desde la creación de personajes hasta la ejecución de batallas. La creación de personajes implica asignar atributos como vida y fuerza, mientras que las opciones de información brindan detalles sobre las habilidades y herramientas disponibles. En resumen, el código se presenta como una aplicación de consola que permite a los entusiastas de los juegos de roles explorar y disfrutar de un mundo ficticio a través de la programación en C++.

### Diagrama de Clases

El diagrama de clases sirve como un mapa visual que ilustra a grandes rasgos los elementos del programa. Cada clase representa una entidad clave dentro del sistema, encapsulando sus atributos y comportamientos específicos. Las relaciones entre las clases, expresadas mediante asociaciones de herencia, agregaciones y composiciones, destacan la interconexión y la dependencia entre cada uno de los componentes del programa.   

![DiagramaClases_Final](https://github.com/jorgeGrVl/Odisea-de-los-Heroes/assets/150094617/88cbde7d-3060-4608-8ef6-44012a29f96a)

Las clases Habilidad y Herramienta no tienen setters debido a que no son necesarios ya que los objetos de dichas clases se crean al inicio del programa y no se modifican ni se alteran sus atributos en ningún momento. De igual manera, las clases Guerrero y Mago solamente utilizan los setters de la clase Personaje debido a que los atributos específicos de su clase son constantes e inalterables.
