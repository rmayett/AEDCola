#include "Cola.h"

int main()
{
	Cola c = Cola();
	c.Encolar(55);	
	c.Encolar(666);
	c.Descolar();
	c.VaciarCola();
	c.Encolar(360);
	c.Show();	
	return 0;
}