# Examen1

https://github.com/josejc05/Examen1.git

Parte 1:

Pregunta 1: Respuesta: d;
Pregunta 2: Respuesta: b;
Pregunta 3: Respuesta: b;

Parte 3:

Pregunta 1:
La programación procedimental se basa en organizar el código en una serie de funciones que operan en datos separados, mientras que la programación orientada a objetos se enfoca en crear objetos que combinan datos y funciones relacionadas. C++ brinda soporte para ambos enfoques permitiendo la definición de funciones globales y la creación de clases y objetos que encapsulan datos y comportamiento, lo que proporciona flexibilidad para abordar distintos tipos de problemas de programación.

Pregunta 2:
En C++, la propagación de una excepción significa que cuando ocurre un error, como un problema en una función, el programa busca una solución en otras partes del código y envía el error hasta que se encuentra un lugar para manejarlo. Si una excepción lanzada no se encuentra en ningún bloque catch, se convierte en una "excepción no capturada", lo que hace que el programa se detenga abruptamente. Es importante que el programa maneje las excepciones para evitar que esto suceda y garantizar un comportamiento controlado.

Pregunta 3:
La "adquisición de recursos" en C++ se refiere a obtener elementos esenciales como memoria o archivos que un programa necesita. Esto es crucial porque debemos utilizar y liberar estos elementos correctamente para evitar problemas. La gestión de excepciones está relacionada con esto, ya que si ocurren errores inesperados, necesitamos asegurarnos de que los recursos se liberen de manera segura para que el programa no falle. Los bloques try-catch en C++ ayudan a lograr esto y son fundamentales para garantizar que los recursos se manejen adecuadamente, lo que es esencial para la estabilidad del programa.

Descripción breve de cada uno de los ejercicios resueltos:

Ejericio1: 
Este programa en C++ solicita dos números al usuario, los suma y muestra el resultado en la pantalla.

Ejercicio2:
Este programa en C++ define una clase Estudiante con atributos para el nombre, la edad y el grado. Luego, el programa solicita al usuario ingresar información del estudiante, que incluye nombre, edad y grado. Después de recibir la entrada, muestra la información ingresada en la pantalla.

Ejercicio3:
Este programa en C++ intercambia los valores de dos variables, n1 y n2, utilizando punteros y una función llamada intercambiar. Inicialmente, se declaran las variables n1 y n2 con valores originales, que se muestran en la pantalla. Luego, se crean punteros ptr1 y ptr2 que apuntan a las direcciones de memoria de n1 y n2, respectivamente. La función intercambiar se llama con estos punteros, lo que intercambia los valores de las variables n1 y n2. Finalmente, se muestran los valores intercambiados en la pantalla.

Ejercicio4:
Este programa en C++ divide dos números ingresados por el usuario y maneja la excepción de división por cero. Comienza solicitando al usuario el numerador y el denominador, y luego intenta realizar la división en el bloque try. Si el denominador es igual a cero, se lanza una excepción con el mensaje "División por cero no está permitida". La excepción se captura en el bloque catch, donde se muestra el mensaje de excepción. El programa continúa después de la excepción y muestra un mensaje indicando que sigue en ejecución, independientemente de si se lanzó una excepción o no.

Ejercicio5:
Este programa en C++ crea una clase Estudiante que tiene un método para registrar materias y otro para listarlas. Se crea un objeto de la clase Estudiante llamado "Jose" al que se le registran tres materias: Matemáticas, Física y Programación. Luego, se llama al método listar_materias para mostrar las materias registradas por el estudiante "Jose" en la pantalla.

Ejercicio6:
Este programa en C++ emplea una serie de funciones y bucles para gestionar calificaciones. Inicialmente, declara un vector de calificaciones y lo muestra en la pantalla. Luego, mediante un bucle for, calcula la suma de las calificaciones y, tras convertirla a un valor decimal, calcula el promedio dividiendo la suma por la cantidad de calificaciones. Finalmente, muestra el promedio en la pantalla a través de cout.

Ejercicio7:
Este programa en C++ utiliza una clase llamada registroAsistencia para crear objetos que representan registros de asistencia, con atributos de fecha y estado. Luego, se crean tres objetos de esta clase, cada uno con una fecha y un estado diferentes, y se llama al método mostrar_asistencia() de cada objeto para mostrar la fecha y el estado en la pantalla. La clase encapsula la lógica de presentación de registros de asistencia, lo que hace que el código sea más organizado y legible.

Ejercicio8:
Este programa en C++ define una clase llamada Estudiante con atributos para el nombre y el grado. Luego, crea un vector de objetos Estudiante que representa a varios estudiantes con sus respectivos nombres y grados. El programa muestra una lista de los grados disponibles y, mediante un bucle for, imprime los nombres y grados de los estudiantes en la pantalla. Posteriormente, solicita al usuario ingresar un grado y, mediante otro bucle for, muestra los nombres de los estudiantes que pertenecen al grado ingresado. El programa realiza la filtración de estudiantes basándose en el grado solicitado por el usuario.

Ejercicio9:
Este programa en C++ ilustra cómo manejar una excepción personalizada llamada MateriaYaRegistradaException. Un objeto de la clase Estudiante registra materias y lanza esta excepción si se intenta registrar una materia ya existente. El programa muestra un mensaje de error cuando se captura la excepción, indicando que la materia ya ha sido registrada.

Ejercicio10:
Este programa en C++ define una clase llamada Profesor con atributos como nombre, edad, materia impartida y años de experiencia. Luego, se crea un objeto de la clase Profesor llamado "Jose Jurado" con valores específicos para los atributos, y se llama al método mostrar_info_profesor() para mostrar la información relevante del profesor en la pantalla. La clase encapsula la información del profesor y proporciona un método para su presentación organizada.

Fuentes: Usé Chat gpt

