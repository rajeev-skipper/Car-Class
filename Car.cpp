#include <iostream>
#include <string>
#include "Car.h"
 
using namespace std;
Car :: Car(int year, string model){
  make_year = year;
  Model = model; 
}
  
void Car :: Brake(){
  speed = speed-8;
}

void Car :: Accelerate() {
  speed = speed+20;
} 

void Car :: setspeed(int s){
  spped = s;
}

int Car :: getspeed(){
  return speed;
}

void setmakeyear(int y){
  make_year = y
} 

int getmakeyear(){
  return make_year;
}

void setmodel(string m){
  Model = m;
}

string getmodel(){
  return Model;
}
