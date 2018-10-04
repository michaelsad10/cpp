#include <iostream> 
using namespace std; 

class Animal{
    private:
        int height; 
        int weight; 
        string name; 
        static int numOfAnimals; 
    
    public: 
        int getHeight(){
            return height; 
        }
        int getWeight(){
            return weight;
        }
        string getName(){
            return name; 
        }
        void setHeight(int cm){
            height = cm;
        }
        void setWeight(int kg){
            weight = kg;
        }
        void setName(string animalName){
            name = animalName;
        } 

        Animal(int, int, string);
        Animal(); 
        ~Animal(); 
        static int getNumOfAnimals(){return numOfAnimals;}
        void toString();
};

int Animal::numOfAnimals = 0; 

Animal::Animal(int height, int weight, string name){
    this -> height = height; 
    this -> weight = weight; 
    this -> name = name; 
    Animal::numOfAnimals++;  
}
Animal::~Animal(){
    cout << "Animal " << this -> name << " destroyed" << endl; 
}
Animal::Animal(){
    Animal::numOfAnimals++;
}

void Animal::toString(){
    cout << this -> name << "is" << this -> height << " cms tall and " << this -> weight << " kgs in weight" << endl; 
}

class Dog : public Animal{

    private:
        string sound = "woof"; 
    public: 
        void getSound(){cout << sound << endl;}
        Dog(int, int, string, string);
        Dog() : Animal(){};
        void toString(); 
};

Dog::Dog(int height, int weight, string name, string bark) : Animal(height, weight, name){
    this -> sound = bark; 
}

void Dog::toString(){
    cout << this->getName() << " is " << this->getHeight() << " cms tall and " << this -> getWeight() << " kgs in weight and says " << this->sound << endl; 
}

int main(){
    Animal fred; 
    fred.setHeight(33); 
    fred.setWeight(10); 
    fred.setName("fred");
    Dog spot(38,15,"spot","woof"); 
    cout << "Number of Animals" << Animal::getNumOfAnimals() << endl; 
    cout << fred.getName() << " is " << fred.getHeight() << " cms tall and " << fred.getWeight() << "kgs in weight" << endl; 
    spot.getSound(); 
    spot.toString();
    spot.Animal::toString(); 
    return 0; 
}