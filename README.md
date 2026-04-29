INTEGRANTES: MIGUEL SANDOVAL. JUAN PEREZ
# Series de Taylor

calcula  funciones matemáticas utilizando sus expansiones en **Series de Taylor**. Es una herramienta  diseñada para entender cómo las computadoras aproximan funciones complejas de forma iterativa.

## Funciones Incluidas

El programa calcula las siguientes aproximaciones:
*   **Exponencial ($e^x$):** Suma infinita de potencias.
*   **Seno ($\sin x$):** Serie alternante de potencias impares.
*   **Coseno ($\cos x$):** Serie alternante de potencias pares.
*   **Tangente ($\tan x$):** Calculada mediante la relación entre Seno y Coseno.
*   **Raíz Cuadrada ($\sqrt{1+x}$):** Implementación mediante serie binomial para valores $|x| < 1$.

##  Automatización con Makefile

Para evitar comandos largos en la consola, este proyecto utiliza un **Makefile** para gestionar el flujo de trabajo.

| Comando | funcion |
| `make build` | Compila el código fuente y genera el ejecutable `programa`. |
| `make run` | Ejecuta el programa y muestra los resultados en la terminal. |
| `make clean` | Elimina el archivo ejecutable para limpiar el entorno. |

## Requisitos

*   Compilador `g++`.
*   Herramienta `make` instalada en el sistema.

## Notas Técnicas

*   **Sin `using namespace std`**: Se utiliza el prefijo `std::` para garantizar la claridad y evitar conflictos de nombres.
*   **Precisión**: Por defecto, el programa utiliza **10 términos** de la serie, lo cual ofrece un equilibrio entre velocidad y precisión para fines académicos.
*   **Librerías**: Se hace uso de `<iostream>` para entrada/salida y `<cmath>` para operaciones matemáticas base.


Desarrollado como parte de una tarea de programación y métodos numéricos.
