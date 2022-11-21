#include <iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
consrtuctor(argument-list) : initialization-section{
    Normal work...
}
*/
class Test{
    int a,b;
    public:
    // Test(int i,int j): a(i), b(i+j)
    // Test(int i,int j): a(i+j), b(i*j)
    // Test(int i,int j): a(i), b(2*j)
    // Test(int i,int j): a(i), b(a+j)

    // BUT THIS WILL CREATE TROUBLE(a will take garbage value) ---->
    // Test(int i,int j): b(j),a(i)  --> becoz. a is declared first in class and needs to be assigned also first.
    
    Test(int i,int j): a(i),b(j){
        cout<<"Constructor executed "<<endl;
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
};
int main(){
    Test t(34,67);
    return 0;
}