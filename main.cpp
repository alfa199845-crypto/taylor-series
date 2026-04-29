
#include <cmath>
#include <iostream>
#include "taylor.h"

int main() {
    double x = 0.5; 
    int terminos = 10;

    std::cout << "resultados de Series de Taylor " << std::endl;
    std::cout << "exponencial (e^" << x << "): " << taylor_exponencial(x, terminos) << std::endl;
    std::cout << "seno de " << x << ": " << taylor_seno(x, terminos) << std::endl;
    std::cout << "coseno de " << x << ": " << taylor_coseno(x, terminos) << std::endl;
    std::cout << "tangente de " << x << ": " << taylor_tangente(x, terminos) << std::endl;
    std::cout << "raiz de (1 + " << x << "): " << taylor_raiz(x, terminos) << std::endl;

    return 0;
}
