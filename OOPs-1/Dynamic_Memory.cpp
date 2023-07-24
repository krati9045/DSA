#include<iostream>
using namespace std;

class Animal{
    
    public:
    // state
    int age;
    string name;

    // behaviour
    void eat()
    {
       cout<<"I am eating"<<endl ;
       
    }

    void sleep()
    {
        cout<<"I am sleeping" ;
    }
};

int main()
{
    // object creation

    //dynamic
   Animal* suresh=new Animal;

   (*suresh).age =15;
   (*suresh).name ="hiii";
   
   
   //alternative dynamic
   cout<<suresh->age<<endl;
   cout<<suresh->name<<endl;

   suresh->eat();
   suresh->sleep();


   return 0;
}





