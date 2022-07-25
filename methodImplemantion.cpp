#include <iostream>

using namespace std;

class MyClass{ // class
    public: //access specifier
    void myMethod(){ // method declation
        cout<<"My Name is Rajat";
    }
};


int main()
{
    MyClass obj;// create a obj
    obj.myMethod(); // call the method
    return 0;
    
}