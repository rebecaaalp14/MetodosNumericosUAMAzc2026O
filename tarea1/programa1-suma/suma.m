args = argv()

if numel(args) >=2                      //comparándolo con los otros dos programas (c y python), es como si aquí, diciendo que si argc = 0, es un solo argumento. por eso en el que sigue es = 2, por si en dado caso recibiera los 3 argumentos (el nombre del programa y dos datos: [0, 1, 2] = 3)
    a = str2double(args{1});            //numel devuelve el total de elementos. e indica cuantos datos fueron introducidos. pero como no se solicita leer ningún dato, se queda en 0 argumentos leídos. a y b se toman de la línea de comandos.
    b = str2double(args{2});            //str2double doblega la cadena de almacenamiento
else
    a = 0.1;
    b = 0.2;
end

printf("SUMA DE 0.1 + 0.2 EN MATLAB. RESULTADO: %.17g\n", a+b)

//BIBLIOGRAFÍA
//1. Passing Arguments to Executable Scripts (GNU Octave (version 11.1.0)). (s. f.). https://docs.octave.org/latest/Passing-Arguments-to-Executable-Scripts.html