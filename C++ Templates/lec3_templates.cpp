#include <iostream>
using namespace std;

// Function templates
// similar to classes we can alos make function templates
template<class T1,class T2>
float avgMarks(T1 a,T2 b){
    float avg=(a+b)/2.0;
    return avg;
}

template<class T>
void swapp(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    cout<<avgMarks(2,3)<<endl;
    int x=2;
    int y=4;
    cout<<x<<" "<<y<<endl;
    swapp(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}