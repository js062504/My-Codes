#include <iostream>
using namespace std;

class Complex{
    int real,img;
    public:
    void setData(int a,int b){
        real=a;
        img=b;
    }
    void getData(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<img<<endl;
    }
};
int main(){
    Complex c1;
    // c1.setData(45,67);
    // c1.getData();

    // Complex *ptr = &c1;
    // Complex *ptr = new Complex;
    // (*ptr).setData(45,67);
    // (*ptr).getData();
    //  or we can also use arrow operator(->)
    // ptr->setData(45,67);
    // ptr->getData();

    // Array of objects
    Complex *ptr=new Complex[3];
    ptr->setData(1,6);
    ptr->getData();

    (ptr+1)->setData(3,6);
    (ptr+1)->getData();

    (ptr+2)->setData(1,6);
    (ptr+2)->getData();
    return 0;
}