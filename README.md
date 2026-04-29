# Aproximación de Funciones: Series de Taylor

**INTEGRANTES:** MIGUEL SANDOVAL, JUAN PEREZ

Este proyecto implementa el cálculo de diversas funciones matemáticas utilizando sus expansiones en Series de Taylor. El software ha sido diseñado bajo una arquitectura modular en C++, separando la lógica de cálculo de la interfaz de usuario.

## Funciones Incluidas

El programa permite calcular aproximaciones para las siguientes funciones trascendentales:
* **Exponencial ($e^x$):** Suma de potencias divididas por factoriales.
* **Seno ($\sin x$):** Aproximación mediante términos alternantes de potencias impares.
* **Coseno ($\cos x$):** Aproximación mediante términos alternantes de potencias pares.
* **Tangente ($\tan x$):** Calculada a partir de la relación entre las series de Seno y Coseno.
* **Raíz Cuadrada ($\sqrt{1+x}$):** Implementación mediante serie binomial para valores $|x| < 1$.

## Estructura del Proyecto

El código fuente se divide en los siguientes componentes para facilitar la compilación separada:
* **taylor.h**: Archivo de cabecera con los prototipos de las funciones.
* **taylor.cpp**: Implementación técnica de los algoritmos de las series.
* **main.cpp**: Punto de entrada del programa y visualización de resultados.

## Automatización con Makefile

Se incluye un archivo Makefile para gestionar la construcción del binario.

| Comando | Función |
| `make build` | Compila el proyecto y genera el ejecutable `programa`. |
| `make run` | Ejecuta el programa generado. |
| `make clean` | Elimina el ejecutable y archivos temporales. |

## Requisitos del Sistema

* Compilador de C++ (g++) con soporte para el estándar C++11 o superior.
* Utilidad GNU Make instalada.

## Notas Técnicas

* **Modularización**: Se utiliza el esquema de archivos de cabecera (.h) para separar la lógica.
* **Espacios de nombres**: Uso explícito de `std::` para mayor claridad técnica.
* **Precisión**: Se utilizan 10 términos de serie por defecto para propósitos académicos.
* **Librerías**: Uso de `<iostream>` para salida y `<cmath>` para operaciones de soporte.
