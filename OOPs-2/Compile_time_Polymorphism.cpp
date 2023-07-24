#include<iostream>
using namespace std;


// Function Oveloading

/*
class Maths{
    public:

    // signature must be different
    int sum(int a,int b)
    {
        return a+b;

    }

    int sum(int a,int b,int c)
    {
        return a+b+c;
    }
    int sum(int a,float b)
    {
        return a+b;
    }
};

int main()
{
    Maths obj;
    cout<<obj.sum(2,3)<<endl;
    cout<<obj.sum(2,3,5)<<endl;
    cout<<obj.sum(2,3.34f)<<endl;
}

*/



// Operator Overloading

class Param{
    public:
    int val;

    void operator+(Param& obj2){
        int value1= this->val;
        int value2= obj2.val;
        cout<<(value2-value1);
     
    }


};

int main()
{
    Param obj1,obj2;
    obj1.val=7;
    obj2.val=2;

    // this should print the difference between them
    obj1 + obj2;
    return 0;
}