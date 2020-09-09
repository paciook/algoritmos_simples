// C++ baby steps

#include <cstdio>
#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;

int esMayor(int a, int b);

int main()
{
	int x = 0;
	float y = 1.22;
	char c = 'a';
	bool p = true;
	string s = "hola";

	// Imprimir por pantalla
	printf("hola mundo!!\n");
	int dias = 5;
	int semanas = 1;
	printf("llevo %d dias y %d semanas en cuarentena!!",dias,semanas);
	cout << "hola mundo!!" << endl;
	
	// Entrada de datos
	cout << "cuantos dias llevas en cuarentena ? " <<endl;
	int diasTuyos;
	cin >> diasTuyos;
	cout << "llevas " << diasTuyos << "en cuarentena " << endl;

	if(esMayor(diasTuyos,dias))
	{
		cout << "llevas mas dias que yo!!" << endl;

	}
	else
	{
		cout << "ah, te gane!" << endl;
	}

	for(int i = 0; i<11;i++)
	{
		cout << i << endl;	
	}
	int j = 0;
	while(j<11)
	{
		cout << j << endl;
		j++; 
		// j = j + 1;

	}
	cout << esMayor(2,3) << endl;
 } 

 int esMayor(int a, int b)
 {
 	return 0;
 	
 	//return a > b;

 }	