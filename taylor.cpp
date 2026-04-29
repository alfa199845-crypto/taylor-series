#include "taylor.h"
#include <cmath>

// exponencial 
double taylor_exponencial(double x, int n) {
    double suma = 1.0; // El primer término es x^0 / 0! = 1
    double termino = 1.0;
    for (int i = 1; i < n; i++) {
        termino *= x / i; // Calcula el siguiente término basándose en el anterior
        suma += termino;
    }
    return suma;
}

// seno
double taylor_seno(double x, int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += std::pow(-1, i) * std::pow(x, 2 * i + 1) / std::tgamma(2 * i + 2); 
    }
    return suma;
}

// coseno
double taylor_coseno(double x, int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += std::pow(-1, i) * std::pow(x, 2 * i) / std::tgamma(2 * i + 1);
    }
    return suma;
}

// tangente
double taylor_tangente(double x, int n) {
    return taylor_seno(x, n) / taylor_coseno(x, n);
}

// raíz cuadrada (de 1 + x)
double taylor_raiz(double x, int n) {
    double suma = 1.0;
    double termino = 1.0;
    for (int i = 1; i < n; i++) {
        termino *= (0.5 - i + 1) * x / i;
        suma += termino;
    }
    return suma;
}
