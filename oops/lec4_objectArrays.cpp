#include <bits/stdc++.h>
using namespace std;

class Employee{
    // private:  //cannot access directly.
    int id;
    int salary;
    public:
    void setId(void){
        salary=122;
        cout<<"Enter the id of Employee"<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"The id of this employee is "<<id<<endl;
    } 

};

int main(){
    // Employee person1,person2;
    // person1.setId();
    // person1.getId();

    // person2.setId();
    // person2.getId();

    // For a large number where we want to use array.
    Employee company[4];
    for(int i=0; i<4; i++){
        company[i].setId();
        company[i].getId();
    }

    return 0;
}