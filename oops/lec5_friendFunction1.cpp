#include <iostream>
using namespace std;
// Always use forward declaration  where u are using something which is declared later in code.
class Y; 

class X{
    int data;
    public:
    void setValue(int value){
        data=value;
    }
    friend void add(X,Y);
};

class Y{
    int num;
    public:
    void setValue(int value){
        num=value;
    }
    friend void add(X,Y);
};

void add(X o1,Y o2){
    cout<<"Sum of objects of X and Y gives "<<o1.data+o2.num<<endl;
}

int main(){
    X a1;
    a1.setValue(2);
    Y b1;
    b1.setValue(3);
    add(a1,b1);
    // here a1 and b1 are objects   
    return 0;
}