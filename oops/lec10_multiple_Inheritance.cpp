#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// (Base 1 and Base 2are both Base Classes)Base1 + Base2 --->Derived
class Base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int=a;
    } 
};

class Base2{
    protected:
    int base2int;
    public:
    void set_base2int(int b){
        base2int=b;
    }
};

class Derived : public Base1, public Base2{
    public:
    void show(){
        cout<<"The value of Base1 is "<<base1int<<endl;
        cout<<"The value of Base2 is "<<base2int<<endl;
    }

};
int main(){
    Derived p3;
    p3.set_base1int(34);
    p3.set_base2int(43);
    p3.show();
    return 0;
}