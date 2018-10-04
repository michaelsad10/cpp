#include "burrito.h"
#include <iostream>
using namespace std;

burrito::burrito(){
    cout <<"oh shit its a burrito" << endl; 
}
int burrito::getWeight(int kgs){
    return this->weight = kgs; 
}
int burrito::getHeight(int cms){
    return this->height = cms; 
}