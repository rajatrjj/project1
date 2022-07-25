#include <iostream>

using namespace std;

class MyClass{ // class
    public: //access specifier
    int myNum; // attribute
    string myString; //attribute
};


int main()
{
    MyClass obj;// create a obj
    
    obj.myNum = 10; // access atribute and set values
    obj.myString ="Rajat Raj";
    cout<<obj.myNum<<"\n";
    cout<<obj.myString;
}