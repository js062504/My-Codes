#include <iostream>
using namespace std;

int count=0;
// Constructor starts as soon as we create object and as the work of object get over destructor is called. 
// Destructor neither takes argumnents nor it returns
class num{
    public:
    num(){
        count++;
        cout<<"Constructor is called. "<<count<<endl;
    }
    ~num(){
        cout<<"Destructor is called. "<<count<<endl;
        count--;
    }
};

int main(){
    num n1;
    num n2;
    num n3;
    return 0;
}