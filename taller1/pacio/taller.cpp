#include <iostream>
#include <string>
#include <vector>
#include "taller.h"

// ACLARACION: Todas las funciones devuelven algo del tipo necesario, esto es para que no explote cuando 
// vayan compilando (y de paso para que no se olviden de devolver el tipo correcto)


// Ejercicio 0
// Dado un vector v, devuelve el valor maximo encontrado.
// Se puede hacer en una línea (pero no lo hagan, no vale)
// HINT: Para saber la cantidad de elementos de un vector, usar v.size()

int mayor(vector<int> v)
{
	int aux = v[0];

	for (int x = 0; x <= v.size() - 1; x++)
	{
		if (v[x] >= aux)
			aux = v[x];
	}
	return aux;
}

// Ejercicio 1 
// Dado un vector v, devuelve el reverso.
// Se puede hacer en una línea (pero no lo hagan, no vale)

vector<int> reverso(vector<int> v)
{
	// Inicializo un vector vacío
	vector<int> reverso;

	// COMPLETAR
	for (int x = 1; x <= v.size(); x++)
		reverso.push_back(v[v.size() - x]);

	return reverso;
}

// Ejercicio 2
// Dado un vector v y un entero k, rotar k posiciones los elementos de v.
// [1,2,3,4,5,6] rotado 2, deberia dar [3,4,5,6,1,2].
vector<int> rotar(vector<int> v, int k)
{
	// Inicializo un vector vacío
	vector<int> rotado;

	// COMPLETAR

	for (int x = k; x <= v.size() + k - 1; x++)
	{
		if (x <= v.size() - 1){
			rotado.push_back(v[x]);
		}
		else
		{
			rotado.push_back(v[x - v.size()]);
		}
	}

	return rotado;
}

// Ejercicio 3
// Dado un vector v, hacer una función que lo modifique sumandole uno a todos sus elementos
// Determinar la cabecera de la funcion y definir taller.h !!
void sumarUno(vector<int>& v)
{
	for(int x = 0; x <= v.size(); x++)
		v[x]++;
	return;
}

// Ejercicio 4
// Dado un vector v de int, dice si esta ordenado(ya sea creciente o decrecientemente)
bool estaOrdenado(vector<int> v)
{
	// COMPLETAR
	int ori = -1;  // Uso esta variable para que sea indistinta la orientacion del orden
	int x = v.size() - 1;

	if (v[0] <= v[v.size() - 1])
		ori = 1;
		x = 0;
	
	while(x <= v.size() - 2 && x >= 1){
		if (v[x] > v[x + ori])
		{
			cout << v[x] << "  " << v[x + ori] << endl;
			return false;
		}
		x += ori;

	}

	return true;
}

// Ejercicio 5
// Dado un vector de enteros muestra por la salida estándar, el vector
// Ejemplo: si el vector es <1, 2, 5, 65> se debe mostrar en pantalla [1, 2, 5, 65]

// HINT: Esta función es general, out es del tipo de dato ostream. 
// Eso significa que el parametro out puede ser cout (si quiero escribirlo a la consola)
// o bien podrías ser un archivo de texto. En cualquier caso puedo usar el operador << para escribir.

void mostrarVector(vector<int> v, ostream& out)
{
	out << "[";

	for (int x = 0; x <= v.size() - 1; x++)
		{
			if (x != 0)
			{
				out << ", ";
			}
			out << v[x];
		}

	out << "]";
	return;
}

// Ejercicio 6 
// Dado un vector de enteros y el nombre de un archivo de salida,
// escribe al vector en el archivo. Ejemplo: si el vector es <1, 2, 5, 65>
// el archivo contiene [1, 2, 5, 65]
// Ojo con el constructor de ofstream. Es importante hacer la conversion del string a char* usando c_str().
// Reutilizar la función anterior!

void guardarVector(vector<int> v, string nombreArchivo)
{
	// Abro un archivo con el nombre dado por parámetros (c_str() convierte string a un "string" de C)
   ofstream file(nombreArchivo.c_str()); 
   if(file.is_open())
   {
   		mostrarVector(v, file);
   		file.close();
   }
   return;
}


//Ejercicio 7 
// Dado un archivo que contiene una lista de números, contar la cantidad de
// apariciones de cada uno y escribir nombreArchivoOut con una linea por cada
// numero encontrado, un espacio y la cantidad de apariciones
// El parametro max indica el número más grande que puede aparecer en el archivo
// Ejemplo: si el 1 aparece 44 veces y el 2 20 veces (y no hay otros numeros) en la salida deberia
// haber dos lineas, la primera con "1 44" y la segunda "2 20"

void cantidadApariciones(string nombreArchivo, string nombreArchivoOut,int max)
{
	// Abro archivo para lectura
	ifstream fileIn(nombreArchivo.c_str());

	// Abro archivo para escriture
    ofstream fileOut(nombreArchivoOut.c_str());

    int cant;
	int aux;
	if (fileIn.is_open())
	{
		for (int x = 0; x <= max; x++)
		{
			cant = 0;
			fileIn.clear();
			fileIn.seekg(0, ios::beg);
			while( fileIn >> aux )
			{
				if(aux == x)
				{
					cant += 1;
				}
			}   
			if(cant > 0)
			{
				fileOut << x << " " << cant << endl;
			}
		}
		fileIn.close();
		fileOut.close();		
	}
	return;   
}



//Ejercicio 8 (opcional)
//Dado un archivo de texto, lo filtra y devuelve los palindromos en el archivo salida, uno por linea.
void palindromos(string nombreArchivo, string nombreArchivoOut)
{
	return;	
}
