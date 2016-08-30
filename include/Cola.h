/*Rodrigo Mayett Guzman
Se reciclo la clase nodo del programa de lista */
#include "Nodo.h"

class Cola
{
public://constructores de la clase y atributos
	Nodo* H;
	Nodo* T;	
	Cola();
	void Encolar(int Dato);
	int Descolar();
	void Show();
	bool ColaVacia();
	void VaciarCola();
};