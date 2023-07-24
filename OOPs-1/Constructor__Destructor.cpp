#include<iostream>
using namespace std;



class Animal{
      
      //state
     private:
     int weight;
    
    public:
     int age;
     string name;
     

    // Default Constructor
    Animal()
    {
        this->weight=0;
        this->age=0;
        this->name="";
        cout<<"constructor is called"<<endl;
        cout<<endl;
    }


    //Parameterised Constructor
    Animal(int age)
    {
        this->age=age;
        cout<<"Parameterised Constructor : "<<"age : "<<this->age<<endl;
    }
  
    Animal(int age,int weight,string name)
    {
    this->age=age;
    this->weight==weight;
    this->name=name;
    cout<<"Parameterised Constructor "<<endl;
     cout<<endl;
    }     


    //copy constructor

    Animal(Animal &obj)
    {
        this->age=obj.age;
        this->weight=obj.weight;
        this->name=obj.name;

        cout<<"Copy constructor"<<endl;


    }


     
    // behaviour
    void eat()
    {
    cout<<"I am eating"<<endl ;
    }
    void sleep()
    {
     cout<<"I am sleeping" ;
    }
   
    int getWeight()
    {
        return weight;
    }

    void setWeight(int weight)
    {
       this-> weight= weight;
    }

    ~Animal()
    {
        cout<<"I am inside destructor"<<endl;
    }
};

int main()
{

 Animal a;
 Animal* b= new Animal();

//  Animal a1(10);
//  Animal* b1= new Animal(100);

//  Animal a2(12,40,"Hari");


//  Animal c=a;
//  Animal d(*b);
//  Animal animal(c);



delete b;
   
}
