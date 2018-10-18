#ifndef CAR_H
#define CAR_H

class Car{
    public:
        virtual int getSpeed(int mph);
        Car(); 

    private: 
        int speed; 
};

class Convert : public Car{
    public:
        bool gotRoof(bool b);
        int getSpeed(int sped); 
    private:
        bool roof; 
        int speed; 
}; 


#endif 