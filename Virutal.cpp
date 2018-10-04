#include <iostream>
using namespace std;

class Animal{
    public:
        void getFamily(){cout << "We are animals" << endl;}

        virtual void getClass(){cout << "I'm an Animal" << endl;}
};

class Dog : public Animal{
    public: 
        void getClass(){cout <<"I'm a dog" << endl; }
};

class GermanShepard : public Dog{
    public:
        void getClass(){cout << "I'm a german shepard" << endl; }
        void getDerived(){cout << "I'm an animal and dog" << endl; }
};
void whatClassAreYou(Animal *animal){
    animal -> getClass(); 
}
int main(){
    Animal *animal = new Animal; 
    Dog *dog = new Dog; 

    GermanShepard max; 
    Dog spot; 
    Dog* ptrDog = &spot;
    Animal* ptrGshepard = &max; 

    ptrDog -> getFamily(); 
    ptrDog -> getClass(); 
    ptrGshepard -> getFamily();
    ptrGshepard -> getClass(); 

    

    whatClassAreYou(animal);
    whatClassAreYou(dog); 
    return 0; 
}