// Generics Functions --> Templates
// Code Reusability, Increase efficiency of code 
// Template or generics basically reduce function overloading 
// Function oveloading is suppose we have to do a same task one time for int other time for char,float and so on..  It's better here to use templates  
#include <iostream>
using namespace std;
// T is generic datatype and Swap is now a generic function
template<typename T>
void Swap(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
// Swap<int> and Swap both will work
int main(){
    int a=5,b=7;
    cout<<a<<" "<<b<<endl;
    Swap<int>(a,b);
    cout<<a<<" "<<b<<endl;

    char c='c',d='d';
    cout<<c<<" "<<d<<endl;
    Swap(c,d);
    cout<<c<<" "<<d<<endl;
    
    return 0;
}