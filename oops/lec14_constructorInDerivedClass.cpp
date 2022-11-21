#include <iostream>
using namespace std;

// Order of execution of constructors
/* 
1. priority virtual base class in the order they are for eg. if virtual public a,virtual public b  then first a() then b().
2. priority Non virtual base classes again in the same order as they are defined.
3. or last priority to derived class.
*/

class Base1{
    int data1;
    public:
    Base1(int a){
        data1=a;
        cout<<"Base1 Constructor called "<<endl;
    }
    ~Base1(){
        cout<<"Base1 Destructor called "<<endl;
    }
    void printData1(void){
        cout<<"The value of data1 is "<<data1<<endl;
    }
};

class Base2{
    int data2;
    public:
    Base2(int b){
        data2=b;
        cout<<"Base2 Constructor called "<<endl;
    }
    ~Base2(){
        cout<<"Base2 Destructor called "<<endl;
    }
    void printData2(void){
        cout<<"The value of data2 is "<<data2<<endl;
    }

};

class Derived : public Base1, public Base2{
    int derived1,derived2;
    public:
    Derived(int a,int b,int c,int d): Base1(a), Base2(b){
        //--->This new syntax is slight part of initialization in constructor
        derived1=c;
        derived2=d;
        cout<<"Derived Constructor called "<<endl;
    }
    ~Derived(){
        cout<<"Derived Destructor called "<<endl;
    }
    void printDerivedData(){
        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2<<endl;
    }
};

int main(){
    // object ke bante hi Constructor INVOKE ho jaata h!!!!
    // Derived dp=Derived(1,2,3,4);
    Derived dp(1,2,3,4);
    dp.printData1();
    dp.printData2();
    dp.printDerivedData();
    return 0;
}