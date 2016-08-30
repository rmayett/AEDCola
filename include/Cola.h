#include "Nodo.h"//Se reciclo la clase nodo del programa de lista

class Cola
{
public://constructores de la clase
	Nodo* H;
	Nodo* T;	
	Cola();
	void Encolar(int Dato);
	int Descolar();
	void Show();
	bool ColaVacia();
	void VaciarCola();
};