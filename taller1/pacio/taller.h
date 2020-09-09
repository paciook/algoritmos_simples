#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <stdlib.h>

using namespace std;

//Ejercicio 0
// Dado un vector v, devuelve el valor maximo encontrado.
int mayor(vector<int> v);

// Ejercicio 1 
// Dado un vector v, devuelve el reverso.
vector<int> reverso(vector<int> v);
	

// Ejercicio 2
// Dado un vector v y un entero k, rotar k posiciones los elementos de v.
// [1,2,3,4,5,6] rotado 2, deberia dar [3,4,5,6,1,2].
vector<int> rotar(vector<int> v, int k);

// Ejercicio 3
//Dado un vector v, hacer una función que lo modifique sumandole uno a todos sus elementos
//Determinar la cabecera de la funcion!!
void sumarUno(vector<int>& v);


// Ejercicio 4
// Dado un vector v de int, dice si esta ordenado(ya sea creciente o decrecientemente)
bool estaOrdenado(vector<int> v);

// Ejercicio 5 
// Dado un vector de enteros muestra por la salida especificada en out, el vector
// Ejemplo: si el vector es <1, 2, 5, 65> se debe mostrar en la salida [1, 2, 5, 65]
void mostrarVector(vector<int> v, ostream& out);


// Ejercicio 6
// Dado un vector de enteros y el nombre de un archivo de salida,
// escribe al vector en el archivo. Ejemplo: si el vector es <1, 2, 5, 65>
// el archivo contiene [1, 2, 5, 65]
// Reutilizar el ejercicio anterior!
void guardarVector(vector<int> v, string nombreArchivo);


// Ejercicio 7 
// Dado un archivo que contiene una lista de números, cuenta la cantidad de
// apariciones de cada uno y escribe el archivo nombreArchivoOut con una linea por cada
// numero encontrado, un espacio y la cantidad de apariciones
// El parametro max indica el número más grande que puede aparecer en el archivo
// Ejemplo: si el 1 aparece 44 veces y el 2 20 veces, en la salida deberia
// haber dos lineas, la primera con "1 44" y la segunda "2 20"
void cantidadApariciones(string nombreArchivo,string nombreArchivoOut,int max);

//Ejercicio 8 (opcional)
// Dado un archivo de texto, lo filtra y devuelve los palindromos en el archivo salida, uno por linea.
void palindromos(string nombreArchivo, string nombreArchivoOut);
