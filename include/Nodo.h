/*Rodrigo Mayett Guzman
define los atributos y los metodos
 de la clase Nodo*/
#include <iostream>

class Nodo
{
private:
	int Dato;
	Nodo* Sig;
public:
	Nodo(int Dato, Nodo* Sig);//constructores
	Nodo(int Dato);
	void setDato(int Dato);
	void setSig(Nodo* Sig);
	int getDato();
	Nodo* getSig();
	//~Nodo();
};