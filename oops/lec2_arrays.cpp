#include <iostream>
using namespace std;

class shop{
    int counter;
    public:
    void initCounter(){
        counter=0;
    }
    void get_value();
    
};
void shop :: get_value(){
    cout<<counter<<endl;
    counter++;
}
int main(){
    shop grocery;
    grocery.initCounter();
    grocery.get_value();
    grocery.get_value();
    grocery.get_value();
    shop marks;
    marks.initCounter();
    marks.get_value();
    marks.get_value();

    return 0;
}