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

### Bibliografía
1. Nieves Hurtado, A. (2012). Métodos numéricos: aplicados a la ingeniería (4 Ed.)
   [E-Book]. Grupo Editorial Patria.2
2. Métodos numéricos aplicados con MATLAB para ingenieros y científicos (5ta Edición).
   (2023). [E-Book]. McGraw-Hill.
3. Llamas, L. (2024, 29 marzo). Qué son Bits, Bytes, Char, Words, MSB y LSB. Luis
   Llamas.
   https://www.luisllamas.es/que-son-bits-y-bytes-en-binario/


## #2 Aplicaciones a la Ingeniería Mecánica
En la ingeniería mecánica se diseñan, manipulan, prueban y mantienen equipos, piezas y 
sistemas mecánicos. En lo que llevo de la carrera, hay muchos procesos en los que se 
necesitan cálculos exactos.

### Mecánica de Sólidos

Por ejemplo, está la mecánica de sólidos. Antes de tomar este curso se nos enseña 
análisis estructural, donde se ve a qué cargas se someten algunas estructuras y como 
deben ser soportados para no vencerse.

La mecánica de sólidos estudia el commportamiento de materiales sólidos ante la 
deformación, esfuerzos, rigidez y movimiento cuando algo altera su estado (temperatura, 
fuerzas, etc). Para ellas se aplican ecuaciones diferenciales, pero como son muy 
complicadas de resolver con fórmulas exactas, se usan métodos numéricos.

Por ejemplo, pensando en el diseño de un parachoques de un auto, se usa el **método de 
los elementos finitos** (MEF). Divide la pieza o sólido en miles de piezas chiquitas 
"*elementos*" y puntos "*nodos*" para calcular todos los esfuerzos y deformaciones a las 
que se somete.
Es decir; no se enfoca en el cálculo simple y directo de una propiedad. Es necesario 
tomar muchos pedacitos, lo que extiende el cálculo provocando que sea posible cometer 
errores más grandes.

### Transferencia de Calor
Se enfoca en el flujo y transmisión de energí térmica entre sistemas debido a una 
diferencia de temperatura (como equilibrio).

Esta energía (calor) se transmite mediante la conducción (contacto directo entre 
cuerpos), convección (movimiento de fluidos) y radiación (energía como ondas 
electromagnéticas sin estar en contacto directo).

Entre más variables se añadan a esta transferencia, en forma matemática como condiciones 
variables de entorno o ecuaciones diferenciales parcialesno lineales; el cálculo se 
complica.

Como en la mecánica de sólidos, también se puede usar el **método de los elementos 
finitos** para calcular aproximadamente el campo de temperatura.

Para la conducción de calor, se utiliza el **método de diferencias finitas**, en el cual 
reemplazan derivadas en ecuacioned diferenciales con diferencias finitas basadas en 
expansiones de series de Taylor 
      Es decir, sustituyen el uso de derivadas en ecuaciones diferenciales con pequeñas 
      particiones
calculando la temperatura en cada nodo del sólido simple. No es exacto en cuerpos 
irregulares.

**En síntesis:**

**Fenómeno físico -> Modelo matemático + Muchas variables -> Difícil de resolver con fórmulas simples -> Mejor aproximación con métodos numéricos**

### BIBLIOGRAFÍA
1. Joshi, P. (2024). Métodos numéricos para problemas de transferencia de calor en 
sistemas compuestos. ScienceDirect.
https://www.sciencedirect.com/science/chapter/edited-volume/abs/pii/B9780443190094000230
2. ¿Cómo se utilizan métodos numéricos para modelar la conducción de calor en sólidos? 
(2023, 15 agosto). www.linkedin.com.
https://es.linkedin.com/advice/0/how-do-you-use-numerical-methods-model-heat?lang=es&lang=es
3. Desarrollo y análisis de métodos numéricos aplicados a mecánica de sólidos y 
fluidos | Portal UCR SO. (s. f.).
https://portal.so.ucr.ac.cr/matematica/proyectos/desarrollo-y-analisis-de-metodos-numericos-aplicados-mecanica-de


## #3 Herramientas para trabajar con métodos numéricos
 

## #4 Herramientas empleadas en el curso
En lo que va del curso hemos visto las bases para trabajar con varios programas para trabajar con la creación de repositorios, contenedores. Almacenamiento de programas e instrucciones y el funcionamiento de los métodos numéricos.

### Docker
Docker es un programa que funciona como máquina virtual. Funge como una computadora física en forma de software para ejecutar funciones y ocupar un espacio virtual. Lo que hace es organizar y separar procesos para poder ejecutarlos al mismo tiempo
   ### Entorno
dockerfile y compose.yaml
* **Dockerfile:** El Dockerfile es un archivo que contiene los datos que requiere el contenedor para poder levantar los programas: lenguajes de programación, recursos para instalar, etc. Y contiene comandos para CONSTRUIR la imagen de un contenedor. "docker build".
* **compose.yaml:** Compose.yaml es la versión más reciente de este archivo, funciona con WSL 2. Sirve para levantar la imagen, con un solo comando "docker compose up"
* **Comandos para poner en marcha/administrar el contenedor:**
   * up: Construye las imágenes y levanta el contenedor.
   * -d: Ejecuta las imágenes en segundo plano
   * exec: Ejecut un comando dentro de un contenedor activo.
   * stop: Detiene los contenedores.
   * down: Detiene el contenedor y borra los volúmenes.
   * ps: Muestra el estado actual de los contenedores (si está activo o inactivo).
   * ls: Muestra los archivos o carpetas dentro de ese contenedor.
* **Apagar, prender y borrar el contenedor:**
El comando "stop" puede ser util para apagar todos los contenedores trabajando y dejar de consumir espacio en la RAM. Apagarlo detiene los procesos que se están ejecutando, pero siguen guardados, esperando a reactivarse. 
Borrarlos con "down", borra completamente el contenedor y sus datos temporales almacenados. Debe levantarse otra vez.

   ### Lenguajes de programación
* **GNU Octave:** Es una alternativa gratuita para MATLAB. Sirve para poder compilar códigos en Octave. Y es mejor para poder trabajar con problemas matemáticos complejos, como de álgebra lineal.
* **Python:** Da una interfaz más sencilla para poder programar. No requiere tantas declaraciones de variables para poder leer y almacenar información.
* **C:** Es de bajo nivel, trabaja con muchas estructuras, datos estáticos, pero es muy eficiente.

### BIBLIOGRAFÍA
1. Fontana, C. L. (s. f.). Using Python and GNU Octave to plot data. Opensource.com. https://opensource.com/article/20/2/python-gnu-octave-data-science
2. Smalley, S. S. I. (2025, 26 noviembre). ¿Qué es una máquina virtual (VM)? IBM. https://www.ibm.com/mx-es/think/topics/virtual-machines
3. ¿Qué es Docker y cómo funciona? Ventajas de los contenedores Docker. (s. f.). https://www.redhat.com/es/topics/containers/what-is-docker
4. Inc, D. (2026, 28 mayo). How Compose works. Docker Documentation. https://docs.docker.com/compose/intro/compose-application-model/




