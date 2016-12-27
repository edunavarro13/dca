#include <iostream>

using namespace std;

int main () 
{
	char opcion;
	cout << "\n----------------------------------------" << endl;
	cout << "------------- Calculadora --------------" << endl;
	cout << "----------------------------------------" << endl;
	cout << "1. Sumar." << endl;
	cout << "2. Restar." << endl;
	cout << "q. Salir." << endl;
	cin >> opcion;

	if (opcion == '1')
	{
		cout << "\nHas elegido suma." << endl;
	}
	else if(opcion == '2')
	{
		cout << "\nHas elegido resta." << endl;
	}
	else if(opcion != 'q')
	{
		cout << "\nLa opcion elegida no es una de las posibles." << endl;
	}
}
