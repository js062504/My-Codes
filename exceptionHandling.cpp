// Exception Handling is one of the advantage of C++ over C.
// C don't have this facility rather in most cases it will throw NULL value or -1.
#include <iostream>
using namespace std;

// Use of Exception- to make our code more robust and decorative.
// Eg->  1. Factorial of a negative number
//       2. Divide a number by zero
// try, catch, throw
//  use try and catch together 
// if only throw is used it will run and print everything before throw and after that invoke function "terminate"
int main(){
    cout<<"Welcome"<<endl;

    try{
        cout<<"in try"<<endl;
        throw 10;
        cout<<"in try 2"<<endl;
    }
    // catch (int e){
    //     cout<<"in catch and the value stored in e is "<<e<<endl;
    // }
    /*catch (double f){
        cout<<"in catch and the value stored is "<<f<<endl;
        // not using appropriate datatype will also terminate function
    }*/
    /*catch(...){
        // use this if we just want to enter the catch function or 'catch(int){}'
    }*/
    // throw 10; && throw;  will run but terminate function
    //  we can also use throw in a function but function must be defined in try 
//     cout<<"Exit"<<endl;
//     return 0;
// } 


// Que-1. Convert a string into integer and print Bad String if not possible.(Day-16)HackerRank 
/*#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    try{
        cout<<stoi(s)<<endl;
    }
    catch(exception){
        cout<<"Bad String"<<endl;
    }
    return 0;
}*/

// Que-2. Given two numbers (n and p) output n raise to power p and throw exception when any one is negative. (Day-17)HackerRank  

// 1st Method
/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Calculator{
    int n,p;
    public:
    void power(int a,int b){
        n=a;
        p=b;
        try{
            if(n<0 || p<0){
                throw -1;
            }
            cout<<pow(n,p)<<endl;
        }
        catch(int ex){
            cout<<"n and p should be non-negative"<<endl;
        }
    }
};
int main() {
    int t;
    cin>>t;
    int a,b;
    while(t--){
        cin>>a>>b;
        Calculator calc;
        calc.power(a,b);
    }
    return 0;
}
*/

// 2nd Method
/*
#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class Calculator{
    public:
    int power(int n,int p){
        if(n<0 || p<0){
            throw runtime_error("n and p should be non-negative");
        }
        else{
            return pow(n,p);
        }
    }
};
int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}
*/