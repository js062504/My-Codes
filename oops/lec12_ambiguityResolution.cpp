#include <iostream>
using namespace std;
/* Ambiguity basically occurs when there are many function with a similar name in different class. */
class Base1{
    public:
    void greet(){
        cout<<"How are you?"<<endl;
    }
};

class Base2{
    public:
    void greet(){
        cout<<"Kaise ho?"<<endl;
    }
};

class Derived: public Base1, public Base2{
    public:
    void greet(){
        Base2 :: greet();
        
    }
};
int main(){
    Base1 b1;
    Base2 b2;
    b1.greet();
    b2.greet();

    Derived b3;
    b3.greet();
    return 0;
}