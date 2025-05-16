# TAREA 1
La tarea consiste en crear un programa en C, que calcule la mayor secuencia de 1´s dentro de las diagonales paralelas a la secundaria de una matriz binaria cuadrada, dada mediante un archivo .txt Para ello se crea una función que lee el archivo.txt y la guarda en la memoria dinámica con el uso de strtok y atoi para limpiar las cadenas de texto dentro de la matriz. Además, la función principal del programa encuentra la secuencia de 1´s en las diagonales con dirección  ↑↙ mediante un doble for para recorrer todas las diagonales paralelas a la secundaria, que al toparse con un 1 incrementa la variable longitud que luego se compara con la máxima longitud para así encontrar la secuencia más larga. Ultimamente se utiliza free para liberar la memoria dinámica de la matriz.

Matrices ejemplo: Matriz 1: (Salida: 5)
1 0 1 0 1 1
1 0 1 1 1 0
0 1 1 1 1 1
1 1 1 1 1 1
0 1 1 1 1 0
0 0 0 0 0 1

Matriz 2: (Salida: 2)
0 0 1 1 0 
0 0 0 0 1 
1 1 1 1 0 
0 1 0 0 1 
0 1 0 1 0 

Matriz 3: (Salida: 2)
0 1 1
1 0 0
0 0 1
