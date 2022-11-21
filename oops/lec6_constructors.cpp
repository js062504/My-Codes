#include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(void);  // Constructor declaration
    void print(){
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex :: complex(void){       
    a=14;
    b=36;
    cout<<"Hello"<<endl;
}

int main(){
    complex c1,c2;
    c1.print();
    c2.print();
    return 0;
}
// ---> Constructor
// Reduces use of multiple functions
// Has the same name as that of the class
// Should be declared in public section of class only
// It is invoked automatically when we create the object
// Cannot return value (do not have return types)
