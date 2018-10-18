#include <iostream>
#include "car.h"
using namespace std;

int main(){
    Car redCar;
    Convert blueCar; 
    cout << "This blue car is faster " << blueCar.getSpeed(10) << endl; 
    cout << "This red car is fast " << redCar.getSpeed(10) << endl; 
    return 0; 
}