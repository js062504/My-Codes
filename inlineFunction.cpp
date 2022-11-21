#include <bits/stdc++.h>
using namespace std;

// int product(int a,int b){
//     static int c=0;   //This executes only once(use of static)
//     c=c+1;
//     return a*b+c;
// }
// float moneyReceived(int money,float factor=1.04){        //default argument should be in the right.
//     return money*factor;
// }
int main(){
    /* Jab function mein naa ke barabar kaam ho toh function ko inline bana dena warna nahi
    never use inline function in recursion ,static variables */ 
    // int a,b;
    // cout<<"Enter two numbers"<<endl;
    // cin>>a>>b;
    // cout<<"Product of the numbers is "<<product(a,b)<<endl; 
    // cout<<"Product of the numbers is "<<product(a,b)<<endl; 
    // cout<<"Product of the numbers is "<<product(a,b)<<endl; 
    // cout<<"Product of the numbers is "<<product(a,b)<<endl; 

    // int money=1000;
    // cout<<moneyReceived(money)<<endl;       //default argument 
    // cout<<moneyReceived(money,1.45)<<endl;  //normal function call

    //constant argument
    // const int a=0;
    // a=1;
    // cout<<a<<endl;      //Will through an error(means will not let us change the value of a)
    return 0;
}