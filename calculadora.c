#include <iostream>

using namespace std;

int main () 
{
	char opcion;
	bool salir = false;
	do {
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
		else
		{
			salir = true;
		}

		if(!salir)
		{
			char con;
			cout << "¿Quiere hacer otra consulta? (y/n): ";
			cin >> con;

			if(con == 'n')
				salir = true;
		}
	} while (!salir);
}
