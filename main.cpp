#include <iostream.h>
#include "Car.h"
 
 
int main(int argc, char *argv[])
{
Car Maruti(2005, "Maruti-800");
cout<<"Accelerate"<<endl;	
for(int i = 0; i < 5; i++)
{
	Maruti.accelerate();
	cout<<"Current Speed: "<<Maruti.getSpeed()<<endl;	
}
cout<<endl;
cout<<"Decelerate"<<endl;	
for(int i = 0; i < 5; i++)
{
	Maruti.brake();
	cout<<"Current Speed: "<<Maruti.getSpeed()<<endl;	
}
 
system("pause");
	return 0;
}
 
