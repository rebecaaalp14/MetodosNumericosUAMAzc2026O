#include <stdio.h>

int main(){
    int opcion;
    double a, b, respuesta;
    int ciclo;
    int revnum1, revnum2;                  //Para verificar que el valor ingresado sea un número
    printf("   CALCULADORA DE OPERACIONES BASICAS\n");
    printf("1 SUMA\n");
    printf("2 RESTA\n");
    printf("3 MULTIPLICACION\n");
    printf("4 DIVISION\n");
    printf("5 PARA SALIR DE LA CALCULADORA\n");     
    printf("Seleccione una opcion escribiendo solo el numero. Ej. 3 para multiplicacion\n");
      
    while(1) {                              //Colocando un valor distinto a 0 en while, como no se relaciona a una variable, se repite indefinidamente.
                            
        printf("Escriba el numero de su opcion: ");
        ciclo = scanf("%d", &opcion);

        if(ciclo != 1) {
            printf("ERROR. RESPUESTA INCORRECTA.");
            continue;                        //Regresa al inicio del bucle
        }
        else {
            if(opcion==5) {
                printf("FIN DE LA CALCULADORA.");
                return 0;
            }
        }

        printf("PRIMER NUMERO: ");
        scanf("%lf", &a);
        printf("SEGUNDO NUMERO: ");
        scanf("%lf", &b);

        if(opcion==1) {
            respuesta = a+b;
            printf("%g + %g = %.17g\n", a, b, respuesta);
        }
        else if(opcion==2) {
            respuesta = a-b;
            printf("%g - %g = %.17g\n", a, b, respuesta);
        }
        else if(opcion==3) {
            respuesta = a*b;
            printf("%g * %g = %.17g\n", a, b, respuesta);
        }
        else if(opcion==4) {  
            if(b==0) {
                printf("No es posible dividir entre 0. Intente nuevamente.\n");
            }
            else {
                respuesta = a/b;
                printf("%g / %g = %.17g\n", a, b, respuesta);
            }
        }  
            
    }
}
        
        
