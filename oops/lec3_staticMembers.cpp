#include <bits/stdc++.h>
using namespace std;

class Employee{
    int id;
    // int count=0; && count++ will not work here for a new object
    static int count;   // Start from 0 (By default).
    // static int count=0; //Will through an error but REFER LINE 19--->
    public:
    void setData(){
        cout<<"Enter the id "<<endl;
        cin>>id;
    }
    void Getdata(){
        cout<<"The employee id is "<<id<<" and the count is "<<count<<endl;
        count++;
    }
};

int Employee :: count=0;    //here it will work smoothly

int main(){
    Employee person1;
    person1.setData();
    person1.Getdata();

    Employee person2;
    person2.setData();
    person2.Getdata();

    Employee person3;
    person3.setData();
    person3.Getdata();
    
    return 0;
}
