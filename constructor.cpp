#include <iostream>

using namespace std;

class Laptop{
    
    public:
        string brand;
        string model;
        int year;
        
        Laptop(string x , string y,int z);//construction declation inside the class
};

Laptop::Laptop(string x , string y,int z){// construction defination outside class
    brand = x;
    model = y;
    year = z;
}

int main(){
    //create Laptop object and call the construction
    Laptop obj1("asus","tuff gaming" , 2021);
    Laptop obj2("Hp", "A57",2022);
    
    //print the value
    
    cout<< obj1.brand<<" "<<obj1.model<<" "<<obj1.year<<"\n";
    cout<< obj2.brand<<" "<<obj2.model<<" "<<obj2.year<<"\n";
    
    return 0;
}