#include <iostream>
using namespace std;
// Copy Constructor
class Number{
    int a;
    public:
    Number(){
        a=0;
    }      //Default Constructor
    /* Syntax of default constructor--->>> Number(){} */
    Number(int num){
        a=num;
    }
    // When no copy Constructor is found, compiler supplies its own copy Constructor
    Number(Number &obj){
        cout<<"Copy Constructor called!!"<<endl;
        a=obj.a;
    }
    void display(){
        cout<<"The no is "<<a<<endl;
    }

};
int main(){
    Number p(8),q;
    q.display();
    p.display();
    Number p1(p);
    p1.display();
    return 0;
}