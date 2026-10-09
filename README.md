# Métodos Numéricos 1151039
Este es el archivo README del repositorio
* UAM AZCAPOTZALCO - TRIMESTRE 26O
* ANA REBECA LOPEZ PORTUGUEZ - 2233074972
* PROFESOR: GABRIEL HURTADO AVILES
* FECHA DE ENTREGA: 10 DE OCTUBRE DEL 2026

## #1 ¿Qué son los Métodos Numéricos?
Cuando nos enfrentamos a problemas matemáticos complejos (es decir, de cálculo extenso,
difíciles de resolver analíticamente con el cálculo estándar), es de gran ayuda contar 
con un sistema computarizado que nos ayude a realizarlos con mayor exactitud y de 
manera más eficiente y rápida. 

Son **técnicas para formular problemas matemáticos simulando comportamientos de 
sistemas físicos simples** de manera que puedan ser resueltos con operaciones 
aritméticas y lógicas (facilitando su lectura y procesamiento por la computadora). 
	
En el caso de las **operaciones aritméticas**, se encuentran:
* la suma (+), resta (-), multiplicación (*), división (/), módulo (%).

Y en caso de las **operaciones lógicas**, se usan distintos lenguajes para poder 
"traducir" las cantidades deseadas a una forma más fácil de procesar para la 
computadora. Las operaciones lógicas básicas son:
* AND (Conjunción): Las condiciones condiciones (variables) son verdaderas.
* OR (Disyunción): Cualquiera de las condiciones es verdadera.
* NOT (Negación): Se invierte el valor.
* XOR (OR EXLUSIVA): Da verdadero si las variables son distintas entre sí.

Esta simplificación abre paso a la resolución de muchos tipos distintos de problemas.

### Aproximaciones y Errores

Las computadoras requieren almacenar los datos con los que harán cálculos o cualquier 
otra tarea.

```bash
El bit es la unidad de información más pequeña que almacena una computadora.
Es la base del lenguaje de la computadora.
```

En cálculos complejos, los números muy grandes o muy pequeños (extensos en dígitos) se 
manejan usando aproximaciones o solo no se manejan porque la computadora **no es 
capaz** de almacenar una cadena tan larga de caracteres. Estas aproximaciones influyen 
en el resultado que se obtiene y en su grado de error.

El número de bits se conoce como **"Palabra"** o **"Word"** y van desde 8 a 64 bits, 
dependiendo de que tan extenso y preciso se requiera que sea el número. En una 
operación, si un número (por ejemplo la raíz de 2) tiene infinidad de decimales, no se 
almacena; se aproxima y almacena hasta los 64 bits dependiendo de los dígitos. Este es 
el **"ERROR DE REDONDEO"**. Dependiendo de las veces que se repita, puede crecer el 
error. Y tomando una referencia, puede calcularse el grado de error:

Ej. Si *x'* es una aproximación a *x*
* *Error Absoluto*:
  		EA = |x' - x|
* *Error Relativo*:
		ER = (|x' - x|)/x
* *Error en por ciento*:
		%E = (|x' - x|)/x * 100

## Bibliografía
1. Nieves Hurtado, A. (2012). Métodos numéricos: aplicados a la ingeniería (4 Ed.)
   [E-Book]. Grupo Editorial Patria.
2. Métodos numéricos aplicados con MATLAB para ingenieros y científicos (5ta Edición).
   (2023). [E-Book]. McGraw-Hill.
3. Llamas, L. (2024, 29 marzo). Qué son Bits, Bytes, Char, Words, MSB y LSB. Luis
   Llamas.
   https://www.luisllamas.es/que-son-bits-y-bytes-en-binario/


## #2 Aplicaciones a la Ingeniería Mecánica
En la ingeniería mecánica se diseñan, manipulan, prueban y mantienen equipos, piezas y 
sistemas mecánicos. En lo que llevo de la carrera, hay muchos procesos en los que se 
necesitan cálculos exactos.

Por ejemplo, en el análisis de materiales se realizan ensayos de tensión 





## #3 Herramientas para trabajar con métodos numéricos
En lo que va del curso hemos visto las bases para trabajar con varios programas para

## #4 Herramientas empleadas en el curso
