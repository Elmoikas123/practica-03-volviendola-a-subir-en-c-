// pract 3 ejemplos de arreglos en c++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include<string.h>
int main() {

	int numeros[6] = { 10,20,30,40,50,60 };

	int n[3] = { 3,4,5 };

	char c[4] = { 'L','u','i','s' };

	char nombre[10] = { 'M', 'o', 'n', 'a', ' ', 'L', 'i', 's', 'a', '\0' };

	std::cout << "el numero que eligio es: " << numeros[0] << "," << numeros[1] << "," << numeros[2] << "," << numeros[3] << "," << numeros[4] << "," << numeros[5] << std::endl;

	std::cout << "el numero es: " << n[0] << "," << n[1] << "," << n[2] << std::endl;

	std::cout << "Las letras que escogio son: "; for (int i = 0; i < 4; i++)
	{
		std::cout << c[i];
		if (i < 3)
			std::cout << ",";
	}
	std::cout << std::endl;

	std::cout << "El nombre es: " << nombre << std::endl;

	system("pause");
	return 0;
}
