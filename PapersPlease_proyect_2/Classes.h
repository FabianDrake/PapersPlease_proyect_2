#include <list>
#include <string>
#include <iostream>

using namespace std;


//Clase de documentos 
class Document
{
private:
	string name, address, nationality, age;

public:
	Document(string name, string address, string nationality, string age);
	string getName();
	string getAddress();
	string getNationality();
	string getAge();
};

//Clase persona
class Person
{
private:
	list <Document> document;

public:

	void passperson();
	int chekeo(string id, string passoport, int puntaje);
};