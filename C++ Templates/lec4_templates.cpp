#include <iostream>
using namespace std;

template<class T>
class Harry{
    public:
    T data;
    Harry(T a){
        data=a;
    }
    void print();
    void func();
};

// template <class T>
// void Harry<T> :: print(){
//     cout<<"Value of data is "<<a<<endl;
// }    

void func(int a){
    cout<<"Value of a is "<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"value of a is "<<a<<endl;
}
int main(){
    // Harry<int> hr(3);
    // hr.print();

    // Harry hr(3
    func(87);       //Exact match has higher priority over template function
    return 0;
}