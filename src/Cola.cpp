/*Rodrigo Mayett Guzman
Define los metodos de la cola */
#include "Cola.h"

Cola::Cola(){//crea una cola vacia
	this->H=NULL;
	this->T=NULL;
}
//verifica si la cola esta vacia
bool Cola::ColaVacia(){
	if (this->H == NULL && this->T == NULL)
		return true;
	return false;
}
//agrega un nodo a la cola
void Cola::Encolar(int Dato){
	Nodo * aux = new Nodo(Dato);
	if (!ColaVacia())
	{
		T->setSig(aux);
		T=aux;
		this->T->setSig(NULL);		
	}
	else{
		this->H=aux;
		this->T=aux;
	}
}//libera al primer nodo de la cola
int Cola::Descolar(){
	if (!ColaVacia())
	{
		int Dato =this->H->getDato();	
	if (this->H==NULL)
	{
		this->T=NULL;
	}
	this->H=this->H->getSig();
	return Dato;
	}
	else{
		std::cout<<"La lista esta vacia"<<std::endl;		
	}
}
//Deja la cola vacia haciendo las referencias null
void Cola::VaciarCola(){
	this->H=NULL;
	this->T=NULL;
}
//muestra los elementos de la cola 
void Cola::Show(){
	Nodo* aux = this->H;
	while(aux!=NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}
}