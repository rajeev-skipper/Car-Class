#ifndef CARH
#define CARH
#include <string>
#include <iostream>
 
using namespace std;

class Car
{
int make_year:
string Model;

public :
Car(int year, string model);
 
void brake();
 
void accelerate();
 
void setspeed(int s);
 
int getspeed(); 
 
void setmakeyear(string y);

string getmakeyear();

void setmodel(string m);
 
string getmodel();
 
}

