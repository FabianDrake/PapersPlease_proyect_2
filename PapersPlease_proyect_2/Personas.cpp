#include "Classes.h"

//Aqui checamos las personas
void Person::passperson()
{
	int p = 0;
	string aux1, aux2;
	string a[8] = { "Arnoldo Talavera", "Fracc.paseo de la cañada", "Mexicana", "20",
					"Arnoldo Talavera", "Fracc. paseo de la cañada", "Indu", "20" };

	string b[8] = { "Luis Manuel", "Calle Enrique Segoviano", "Mexicano", "30",
					"Luiz Manuel", "Calle Enrique Segoviano", "Mexicano", "30" };

	string c[8] = { "Horacio Reyes", "Calle fresno", "Frances", "25",
					"Horacio Reyes", "Tonaltecas", "Frances", "25" };

	string d[8] = { "Pedro Rangel", "Tlaquepaque av. Alberta", "Mexicana", "32",
					"Pedro Rangel", "Tlaquepaque av. Alberta", "Mexicana", "32" };

	string e[8] = { "Don cheto", "El Westside", "Mexicana", "21",
					"Don cheto", "El Westside", "Americana", "21" };

	cout << "==============================================================\n";
	cout << "ID 1" << endl;
	cout << "==============================================================\n";
	cout << "Nombre: " << a[0] << endl;
	cout << "Direccion: " << a[1] << endl;
	cout << "Nacionalidad: " << a[2] << endl;
	aux1 = a[2];
	cout << "Edad: " << a[3] << endl;
	cout << "==============================================================\n";

	cout << "\n";

	cout << "==============================================================\n";
	cout << "PASAPORTE" << endl;
	cout << "==============================================================\n";
	cout << "Nombre: " << a[4] << endl;
	cout << "Direccion: " << a[5] << endl;
	cout << "Nacionalidad: " << a[6] << endl;
	aux2 = a[6];
	cout << "Edad: " << a[7] << endl;
	cout << "==============================================================\n";

	p = chekeo(aux1, aux2, p);
	cout << "\n";
	cout << "Puntaje: " << p << endl;
	system("pause");
	system("cls");

	cout << "\n"; //------------------------------------------------------------------------------------------

	cout << "==============================================================\n";
	cout << "ID 2" << endl;
	cout << "==============================================================\n";
	cout << "Nombre: " << b[0] << endl;
	cout << "Direccion: " << b[1] << endl;
	cout << "Nacionalidad: " << b[2] << endl;
	aux1 = b[0];
	cout << "Edad: " << b[3] << endl;

	cout << "\n";

	cout << "==============================================================\n";
	cout << "PASAPORTE" << endl;
	cout << "==============================================================\n";
	cout << "Nombre: " << b[4] << endl;
	cout << "Direccion: " << b[5] << endl;
	cout << "Nacionalidad: " << b[6] << endl;
	aux2 = b[4];
	cout << "Edad: " << b[7] << endl;

	p = chekeo(aux1, aux2, p);
	cout << "\n";
	cout << "Puntaje: " << p << endl;
	system("pause");
	system("cls");;

	cout << "\n";//----------------------------------------------------------------------------------------------

	cout << "==============================================================\n";
	cout << "ID 3" << endl;
	cout << "==============================================================\n";
	cout << "Nombre: " << c[0] << endl;
	cout << "Direccion: " << c[1] << endl;
	cout << "Nacionalidad: " << c[2] << endl;
	aux1 = c[1];
	cout << "Edad: " << c[3] << endl;

	cout << "\n";

	cout << "==============================================================\n";
	cout << "PASAPORTE" << endl;
	cout << "==============================================================\n";
	cout << "Nombre: " << c[4] << endl;
	cout << "Direccion: " << c[5] << endl;
	cout << "Nacionalidad: " << c[6] << endl;
	aux2 = c[5];
	cout << "Edad: " << c[7] << endl;

	p = chekeo(aux1, aux2, p);
	cout << "\n";
	cout << "Puntaje: " << p << endl;
	system("pause");
	system("cls");

	cout << "\n";//-------------------------------------------------------------------------------------------------

	cout << "==============================================================\n";
	cout << "ID 4" << endl;
	cout << "==============================================================\n";
	cout << "Nombre: " << d[0] << endl;
	cout << "Direccion: " << d[1] << endl;
	cout << "Nacionalidad: " << d[2] << endl;
	aux1 = d[2];
	cout << "Edad: " << d[3] << endl;

	cout << "\n";

	cout << "==============================================================\n";
	cout << "PASAPORTE" << endl;
	cout << "==============================================================\n";
	cout << "Nombre: " << d[4] << endl;
	cout << "Direccion: " << d[5] << endl;
	cout << "Nacionalidad: " << d[6] << endl;
	aux2 = d[6];
	cout << "Edad: " << d[7] << endl;

	p = chekeo(aux1, aux2, p);
	cout << "\n";
	cout << "Puntaje: " << p << endl;
	system("pause");
	system("cls");;

	cout << "\n";//----------------------------------------------------------------------------------------------

	cout << "==============================================================\n";
	cout << "ID 5" << endl;
	cout << "==============================================================\n";
	cout << "Nombre: " << e[0] << endl;
	cout << "Direccion: " << e[1] << endl;
	cout << "Nacionalidad: " << e[2] << endl;
	aux1 = e[2];
	cout << "Edad: " << e[3] << endl;

	cout << "\n";

	cout << "==============================================================\n";
	cout << "PASAPORTE" << endl;
	cout << "==============================================================\n";
	cout << "Nombre: " << e[4] << endl;
	cout << "Direccion: " << e[5] << endl;
	cout << "Nacionalidad: " << e[6] << endl;
	aux2 = e[6];
	cout << "Edad: " << e[7] << endl;

	p = chekeo(aux1, aux2, p);
	cout << "\n";
	cout << "Puntaje: " << p << endl;
	system("pause");
	system("cls");;

	cout << "\n";//----------------------------------------------------------------------------------------------


	//Evaluamos el puntaje 

	//Sacmos finales
	if (p <= 0) {
		cout << "Final 1\n";
		cout << "Tu familia murio de hambre, has perdido ";
		cout << "\n";
	}
	if (p == 1 || p == 2) {
		cout << "Final 2\n";
		cout << "Tu familia sufre hambre, tu no vives feliz... Enfocate  \n";
		cout << "\n";
	}
	if (p == 3 || p == 4) {
		cout << "Final 3\n";
		cout << "Apenas te alcanza con lo que te pagan, hazlo mejor para la proxima \n";
		cout << "\n";
	}
	if (p == 5) {
		cout << "Final 4\n";
		cout << "Completaste Satisfatoriamente tu trabajo y vives feliz \n";
		cout << "\n";
	}


}


// Metodo para la validacion de los Documentos
int Person::chekeo(string id, string passoport, int puntaje)
{
	char pass;
	cout << "Vas a sellar su entrada? (S/N): "; cin >> pass;
	cout << "\n";
	if (pass == 'S' || pass == 's') {
		if (id == passoport) {
			cout << "Parece una persona normal\n";
			puntaje++;
		}
		else {
			cout << "Vas de lado, se te colo un terrorista\n";
			puntaje--;
		}
	}
	else if (pass == 'N' || pass == 'n') {
		if (id == passoport) {
			cout << "Porque no lo dejas pasar? que pena, parecia una persona normal\n";
			puntaje--;
		}
		else {
			cout << "Era una persona idocumentada\n";
			puntaje++;
		}
	}
	return puntaje;
}