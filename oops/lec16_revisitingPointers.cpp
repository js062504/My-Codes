#include <iostream>
using namespace std;

int main(){
    // Basic Example
    // int a=5;
    // int* b=&a;
    // int** c=&b;
    // cout<<"Value of a is "<<(*b)<<endl;
    // cout<<c<<endl;
    // cout<<**c<<endl;
    // cout<<b<<endl; //--> address of a
    // // or
    // cout<<(&a)<<endl;

    // new operator
    // int* p=new int(4);
    // cout<<(*p)<<endl;
    // int* arr=new int[3];
    // arr[0]=10;       
    // *(arr+1)=20;    
    // arr[2]=30;       
    // cout<<"Value of arr[0] is "<<arr[0]<<endl;
    // cout<<"Value of arr[1] is "<<arr[1]<<endl;
    // cout<<"Value of arr[2] is "<<arr[2]<<endl;

    // delete operator
    int* arr=new int[3];
    arr[0]=10;       
    arr[1]=20;       
    arr[2]=30;    
    delete[] arr;   
    cout<<"Value of arr[0] is "<<arr[0]<<endl;
    cout<<"Value of arr[1] is "<<arr[1]<<endl;
    cout<<"Value of arr[2] is "<<arr[2]<<endl;


    return 0;
}