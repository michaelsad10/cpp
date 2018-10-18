#include <iostream>
#include "car.h"
using namespace std;

Car::Car(){
    cout << "oh shoot im a car" << endl; 
}
int Car::getSpeed(int sped){
   return this -> speed = sped; 
}
bool Convert::getRoof(bool boo){
    return this -> roof = boo; 
}
int Convert::getSpeed(int sped){
    return this -> speed = sped + 10; 
}