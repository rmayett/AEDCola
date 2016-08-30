#include "Cola.h"

Cola::Cola(){//crea una cola vacia
	this->H=NULL;
	this->T=NULL;
}

bool Cola::ColaVacia(){//verifica si la cola esta vacia
	if (this->H == NULL && this->T == NULL)
		return true;
	return false;
}

void Cola::Encolar(int Dato){//agrega un nodo a la cola
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
}
int Cola::Descolar(){//libera al primer nodo de la cola
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
void Cola::VaciarCola(){//Deja la cola vacia
	this->H=NULL;
	this->T=NULL;
}

void Cola::Show(){//muestra los elementos de la cola
	Nodo* aux = this->H;
	while(aux!=NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}
}