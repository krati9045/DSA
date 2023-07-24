#include<iostream>
using namespace std;


// How to access private members??

// with the help of getters and setters

class Animal1{
      
     private:
     int weight;
    
     public:
     int getWeight()
     {
        return weight;
     }

     void setWeight(int w)
     {
        weight= w;
     }
};

int main()
{
    Animal1 ramesh1;
    ramesh1.setWeight(101);
    cout<<"Weight: "<<ramesh1.getWeight();
}
