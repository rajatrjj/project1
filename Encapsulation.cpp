#include <iostream>

using namespace std;

class Emplyoee{
    
    private:
        int salary;
    
    public:
    
    //setter 
    
    void setSalary(int s){
        
        salary = s;
    }
    //getter
    int getSalary(){
        return salary;
    }
};

int main(){
    
    int amount;
    cout<<"Enter salary amount:";// take input user
    cin>>amount;
    
    Emplyoee obj;
    obj.setSalary(amount);//set the salary
    cout<<obj.getSalary();
    return 0;
    
}