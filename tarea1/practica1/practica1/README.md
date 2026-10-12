# Práctica 1 · La serie de Maclaurin y el criterio de paro

**UEA 1151039 · Métodos Numéricos en Ingeniería · Trimestre 26-O · UAM Azcapotzalco**
**Profesor:** M. en C. Gabriel Hurtado Avilés

**NOTA: No pude asistir a las clases del 7 y 9 de octubre; por lo tanto trabajé esta práctica sola**

| | |
|---|---|
| Equipo | |
| Integrantes (nombre, matrícula y licenciatura) | Ana Rebeca López Portuguez - 2233074972 - Ing. Mecánica |
| Repositorio de la Tarea 1 de | Ana Rebeca López Portuguez |
| Fecha | 12 de octubre del 2026 |

## 1. Octave y Python

![Octave](img/ejercicio2_octave.JPG)
![Python](img/ejercicio2_python.JPG)

¿Coinciden con la lámina 25 de la unidad I?
Ambos resultados de los códigos coinciden bien entre sí. Respecto a la diapositiva, solo se parecen en los dos primeros términos; los siguientes dos términos están redondeados a 4 cifras decimales en la tabla de la diapositiva. Pero en los siguientes dos términos, hay un error de redondeo más grande entre la diapositiva y la compilación de los programas.

## 2. Las dos líneas que completamos en `maclaurin.c`

```c
/* COMPLETAR 1 */: Término siguiente consecutivo
termino = termino * X / n;
/* COMPLETAR 2 */: Porcentaje de error relativo.
ea = fabs(((aprox - anterior)/aprox) * 100);
```

![C](img/ejercicio3_completar_c.JPG)

## 3. Más cifras significativas

| Cifras | εs (%) | Términos | Aproximación | Error verdadero (%) |
|---|---|---|---|---|
| 3 | 0.05% | 6 | 1.64869791666667 | 0.00141649 % |
| 6 | 5e-05% | 9 | 1.648721265035962 | 3.43549e-07 % |
| 17 | 5e-16% | 16 | 1.648721270700128 | 2.69354e-14 % |

1. ¿Cuántos términos hacen falta en cada caso?

2. En cada fila de la tabla, ¿εa es mayor o menor que εt? 
¿Por qué conviene detenerse con εa?

3. Con 17 cifras el programa termina. ¿Cuántas cifras del resultado son correctas en realidad?

   Relaciónenlo con 0.1 + 0.2 de la Tarea 1.

## Uso de inteligencia artificial

Ninguno / Cuál y para qué.

## Referencias
1. Radečić, D. (2026, 4 mayo). Series de Maclaurin: fórmula, desarrollo y ejemplos. Datacamp.
https://www.datacamp.com/es/tutorial/maclaurin-series
