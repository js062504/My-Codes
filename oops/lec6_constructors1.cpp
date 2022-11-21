/* Default Constructor do not contain parameters 
    Parameterized Constructor accepts some parameters.  */
/* There can be multiple uses of Constructor in a class and it will work as per the arguments passed i.e. known as Constructor Overloading. */
#include <iostream>
using namespace std;
// Parameterized Constructor
class complex{
    int a,b;
    public:
    complex(int,int);
    complex(int);
    void printNumber(){
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }

};

complex :: complex(int x,int y){
    a=x;
    b=y;
}
complex :: complex(int z){
    a=z;
    b=0;
}

int main(){
    // Implicit Call
    /*complex p(3,6);
    p.printNumber();*/

    // Explicit Call
    complex q=complex(3,6);
    q.printNumber();
    complex r=complex(3);
    r.printNumber();

    // complex c1;
    // c1.printNumber();
    return 0;
}