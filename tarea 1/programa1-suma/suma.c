/* Primero hice el código "suma1.c" en el que escribí el código muy simple. 
Investigando, vi que si se declara la función como *float* es de 4 bytes (32 bits = de 
6 a 7 cifras significativas) y como se requiere calcular la suma en 17 cifras, de utilizó
la función *double*, la cual almacena de 15 a 17 cifras significativas (8 bytes = 64 bits).
*/

#include <stdio.h>
int main() {
    double a;
    double b;
    a = 0.1;
    b = 0.2;

    printf("SUMA DE 0.1 + 0.2 EN C. RESULTADO : %.17g\n", a+b);

    return 0;
}

/* Creo que es muy básico porque podía incluir bibliotecas como <stdlib.h> y funciones como argc, 
argv, strtod, etc. pero no lo domino bien.
*/

/* BIBLIOGRAFÍA
1. Jha, M. (2024, 28 abril). What is Double in C? - Scaler Topics. Scaler Topics.
https://www.scaler.com/topics/double-in-c/
*/