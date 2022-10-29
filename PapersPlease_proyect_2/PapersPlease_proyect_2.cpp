#include <iostream>
#include <list>
#include <string>
#include "Classes.h"
using namespace std;

int main() {

	Person persons;
	int op;
	do
	{

		cout << "==============================================================\n";
		cout << "Papers Please! \n";
		cout << "==============================================================\n";
		cout << "1 - Iniciar Juego" << endl;
		cout << "2 - Salir " << endl;
		cout << "==============================================================\n";
		cout << "Digite su opcion: "; cin >> op;

		system("cls");

		switch (op)
		{
		case 1:
			persons.passperson();
			cout << "\n---------------------------------------- \n";
			cout << "\nQuiere regresar al menu?\n";
			cout << " 1 - Si \n";
			cout << " 2 - No \n";
			cout << "Opcion: "; cin >> op;
			cout << "---------------------------------------- \n";
			if (op == 1) {
				system("cls");
				break;
			}
			else {
				return 0;
			}
		case 2:
			return 0;
			break;
		}

	} while (op != 2);
	cout << "Opcion no valida";
}
