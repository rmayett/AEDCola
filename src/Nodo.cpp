/*Rodrigo Mayett Guzman
Define los metodos del nodo */
#include "Nodo.h"
//crea un nodo con un dato 
//y la referencia del siguiente
Nodo::Nodo(int Dato , Nodo* Sig)
{
	this->Dato = Dato;
	this->Sig = Sig;
}
//crea un nodo unico
Nodo::Nodo(int Dato)
{
	this->Dato = Dato;
	this->Sig = NULL;
}
//cambia el dato guardado en el nodo
void Nodo::setDato(int Dato)
{
	this->Dato = Dato;
}
//cambia la referencia del siguiente nodo del actual
void Nodo::setSig(Nodo* Sig)
{
	this->Sig = Sig;
}
//obtiene el dato guardado en el nodo
int Nodo::getDato()
{
	return this->Dato;
}
//obtiene el siguiente elemento del nodo actual
Nodo* Nodo::getSig()
{
	return this->Sig;
}