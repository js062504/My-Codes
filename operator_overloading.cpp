// There are some operators which can not be overloaded:
// scope operator(::),   sizeof,  member selector(.),  member pointer selector(*),  ternary operator(?:)

#include <iostream>
using namespace std;

class Complex{
    int real,img;
    public:
        Complex(){
            real=0;
            img=0;
        }
        Complex(int a,int b){
            real=a;
            img=b;
        }
        void print(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
        Complex operator +(Complex c){
            Complex temp;
            temp.real=real+c.real;
            temp.img=img+c.img;
            return temp;
        }

};
int main(){
    Complex c1(2,3);
    Complex c2(5,6);
    Complex c3;

    c3=c1+c2;
    c3.print();

    return 0;
}