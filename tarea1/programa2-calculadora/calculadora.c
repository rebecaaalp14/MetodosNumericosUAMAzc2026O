#include <stdio.h>

int main(){
    int opcion;
    double a, b, respuesta;
    int opcion;

    printf("   CALCULADORA DE OPERACIONES BASICAS\n");
    printf("Seleccione una opcion escribiendo solo el numero. Ej. 3 para multiplicacion\n");
    printf("1 SUMA\n");
    printf("2 RESTA\n");
    printf("3 MULTIPLICACION\n");
    printf("4 DIVISION\n");
    printf("5 PARA SALIR DE LA CALCULADORA\n");


    while(1) {                              //Colocando un valor distinto a 0 en while, como no se relaciona a una variable, se repite indefinidamente.   
            printf("Escriba el numero de su opcion: ");
        
        ciclo = scanf("%d", &opcion);

        printf("PRIMER NUMERO: ");
        scanf("%lf", &a);
        printf("SEGUNDO NUMERO: ");
        scanf("%lf", &b);

        if(opcion == 1) {
            respuesta = a+b;
            printf("%lf + %lf es igual a %lf\n", a, b, respuesta);
        }
        else {
            if(opcion == 2) {
                respuesta = a-b;
                printf("%lf - %lf es igual a %lf\n", a, b, respuesta);
            }
            else {
                if(opcion == 3) {
                    respuesta = a*b;
                    printf("%lf * %lf es igual a %lf\n", a, b, respuesta);
                }
                else {
                    if(opcion == 4) {
                        respuesta = a/b;
                        printf("%lf / %lf es igual a %lf\n", a, b, respuesta);                    
                    }
                    else {
                        if(opcion == 5) {
                            return 0;
                        }
                        else {
                            printf("Ingrese un argumento valido.");
                        }
                    }
                }
            }
        }
    }
}


/* BIBLIOGRAFÍA
1. C - Infinite loop. (s. f.). 
https://www.tutorialspoint.com/cprogramming/c_infinite_loop.htm


*/