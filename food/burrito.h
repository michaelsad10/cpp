#ifndef BURRITO_H
#define BURRITO_H 

class burrito{
    public:
        burrito();
        int getHeight(int cms);
        int getWeight(int kgs); 
    private:
        int weight;
        int height; 
};


#endif 