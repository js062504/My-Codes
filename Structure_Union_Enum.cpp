#include <iostream>
#include <iomanip>

using namespace std;
// int c=45;
// typedef is used to give short names to datatypes
// typedef naa likhe toh bhi chalega(Feature of C++)
typedef struct Employee {
    int eId;
    char favChar;
    float salary;
} ep;
/*struct Employee {
    int eId;
    char favChar;
    float salary;
};*/

union money{
    /*Only 1 out of the 3 can be use at a time
    However,the space stored will be the maximum of all 3. */
    int rice;
    char car;
    float pounds;
} ;
int main(){
    // int a=34;
    // int b=65;
    // int c=a+b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global value of c is "<<::c;
    // :: is scope resolution factor
    // int x=56;
    // int &y=x;
    // cout<<x<<" "<<y<<endl;
    // const int a=34;
    // a=456;
    // cout<<a<<endl;
    // setw() and endl are the two manipulators in C++
    // int a=34,b=56,c=355;
    // cout<<a<<endl;
    // cout<<b<<endl;
    // cout<<c<<endl;
    // cout<<setw(4)<<a<<endl;
    // cout<<setw(3)<<b<<endl;
    // cout<<setw(3)<<c<<endl;
    
    //Structure,Unions and Enums
    // Structure is an array to store different types of datatypes
    // struct Employee member;
    /*ep member;
    member.eId=20943;
    member.salary=120021.67;
    member.favChar='J';
    cout<<member.eId<<endl;
    cout<<member.salary<<endl;
    cout<<member.favChar<<endl;*/
    
    /* union money currency;
    currency.rice=1456;
    currency.car='v';
    cout<<currency.rice<<endl;
    cout<<currency.car<<endl; */

    // enum assigns integer to every entry so that it is convenient for other person to understand by looking at the output
    // enum Meal{ breakfast, lunch, dinner};
    // Meal m1=lunch;
    // cout<<m1<<endl;
    // // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    return 0;
}