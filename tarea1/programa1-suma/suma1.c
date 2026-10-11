// Suma en C. Nos piden leer dos números de la linea de comandos. Si no, se usan 0.1 y 0.2 como los sumandos.
// Imprimir el resultado a 17 cifras significativas.

// Sé programar en C. Pero lo de "línea de comandos" me confundió un poco. Entiendo que si esto no pasa, se usan 0.1 y 0.2.
// Y llevé programación estructurada hace como dos años.

#include <stdio.h>
int main() {
    float a, b, suma;
    a = 0.1;
    b = 0.2;
    suma = a + b;

    printf("Suma de 0.1 y 0.2 en C");
    printf("El resultado es: %.17g\n", suma);

    return 0;

} 




  
