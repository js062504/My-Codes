#include <iostream>
using namespace std;
// always put default constructor
// Base class
class Employee{
    public:
    int id;
    float salary;
    Employee(int inpId){
        id=inpId;
        salary=34.0;
        cout<<"Constructor called! , inputId is "<<inpId<<endl;
    }
    Employee(){}
};

// Derived class Syntax
/*class derived-class-name : visibility-mode base-class-name{

};
Imp...
1.Default Visibility Mode is private.
2.Public Visibility Mode: public members of the base class becomes public members of the derived class.
3.Private Visibility Mode: public members of the base class becomes private members of the derived class.
4.Private members of the base class are never inherited.
*/

class Programmer : public Employee{
    public:
    Programmer(int inpId){
        id=inpId;
    }
    Programmer(){}
    int languageCode=9; 
    void getData(){
        cout<<languageCode<<endl;
        cout<<id<<endl;     //throw error until vb mode is public!!!
    }

};
int main(){
    Employee person1(2),person2(56);
    cout<<person1.salary<<endl;
    cout<<person2.salary<<endl;
    
    Programmer prg1(5);
    prg1.getData();
    // cout<<prg1.languageCode<<endl;
    // cout<<prg1.id<<endl;
    return 0;
}