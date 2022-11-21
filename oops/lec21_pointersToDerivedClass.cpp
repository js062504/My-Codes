#include <iostream>
using namespace std;

class BaseClass{
    public:
    int var_base;
    void display(){
        cout<<"Displaying Base class variable var_base "<<var_base<<endl;
    }
};

class DerivedClass : public BaseClass{
    public:
    int var_derived;
    void display(){
        // cout<<"Displaying Base class variable var_base "<<var_base<<endl;
        cout<<"Displaying Derived class variable var_derived "<<var_derived<<endl;
    }
};
int main(){
    // BaseClass *base_class_pointer;
    // BaseClass obj_base;
    // obj_base.var_base=45;
    // obj_base.display();

    // DerivedClass obj_derived;
    // obj_derived.var_derived=67;
    // obj_derived.display();

    // base_class_pointer = & obj_derived;
    // base_class_pointer->var_base=45;
    // base_class_pointer->var_derived=4565; //this will throw error
    // base_class_pointer->display();


    DerivedClass *derived_class_pointer;
    DerivedClass obj_derived;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived=456;
    derived_class_pointer->display();

    
    return 0;
}