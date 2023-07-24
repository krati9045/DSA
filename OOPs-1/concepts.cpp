#include<iostream>
using namespace std;

// size of empty class

/*
class Animal{
    
};

int main()
{
    cout<<sizeof(Animal)<<endl;
}

*/

// padding and greedy alignment

/*
class Animal{
    int age;
    int weight;
    char ch;
};

int main()
{
    cout<<sizeof(Animal)<<endl;   // O/P : 12
}
*/





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

    //static 
    Animal ramesh;

    ramesh.age=12;
    ramesh.name="Lion";
    cout<<"age of ramesh : "<<ramesh.age<<endl;
    cout<<"name of ramesh : "<<ramesh.name<<endl;

    ramesh.eat();
    ramesh.sleep();
}


























