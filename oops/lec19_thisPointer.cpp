#include <iostream>
using namespace std;

// this is a keyword which is a pointer which points to the object which is being created 
class A{
    int a;
    public:
    // void setData(int a){
    //     this->a=a;
    // }
    A & setData(int a){
        this->a=a;
        return *this;
    }
    void getData(){
        cout<<"Value of a is "<<a<<endl;
    }
};
int main(){
    A g;
    g.setData(45).getData();
    // g.getData();
    return 0;
}