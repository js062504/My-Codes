#include <iostream>
using namespace std;
// Templates with multiple parameters
/*
template <class T1, class T2>
class className{
    // body....
};
*/
// template<class T1,class T2>
template<class T1=int, class T2=float>      //default 
class myClass{
    public:
    T1 data1;
    T2 data2;
    myClass(T1 a,T2 b){
        data1=a;
        data2=b;
    }
    void display(){
        cout<<data1<<" & "<<data2<<endl;
    }
};
int main(){
    myClass<> obj(8,1.45);
    obj.display();
    return 0;
}