/* Primero hice el código "suma1.c" en el que escribí el código muy simple. 
Investigando, vi que si se declara la función como *float* es de 4 bytes (32 bits = de 
6 a 7 cifras significativas) y como se requiere calcular la suma en 17 cifras, de utilizó
la función *double*, la cual almacena de 15 a 17 cifras significativas (8 bytes = 64 bits).
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double a, b;

    if(argc == 3) {                         //si se reciben 3 variables (el nombre el programa y dos números). pero no hay "scanf" para solicitar los datos. entonces se ejecuta la instrucción.
        a = strtod(argv[1], NULL);
        b = strtod(argv[2], NULL);
    }
    else if (argc == 1) {                   //como solo no se reciben los números, si no que se llaman:
        a = 0.1;
        b = 0.2;
    }
    else {
        return 1;
    }
   
    printf("SUMA DE 0.1 + 0.2 EN C. RESULTADO : %.17g\n", a+b);

    return 0;
}

/* Declaración de qué se hizo:
    - uso de "double": alargar la cadena de almacenamiento (64 bits -> 8 bytes -> 15 a 17 dígitos. el DOBLE que float)
    - argc: número de argumentos que recibe el programa (incluyendo el nombre del programa).
    - argv: contiene los argumentos como cadenas de texto (y les da orden, siendo "0" el nombre del programa)
    - stdlib.h: biblioteca de funciones de gestión de memoria y en este caso, conversión de números.
            - strtod: convierte los argumentos en números decimale.
*/

/* BIBLIOGRAFÍA
1. Jha, M. (2024, 28 abril). What is Double in C? - Scaler Topics. Scaler Topics.
https://www.scaler.com/topics/double-in-c/
2. Gonzalez, T. (2024, 9 julio). Profundizando en stdlib.h: La Biblioteca Estándar de Utilidades en C. ACADEMIA SANROQUE.
https://academiasanroque.com/profundizando-en-stdlib-h-la-biblioteca-estandar-de-utilidades-en-c/
*/