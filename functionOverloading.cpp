#include <bits/stdc++.h>
using namespace std;

int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
int main(){
// Function Overloading is basically 2 or more function with same name but different work(Execute Successfully)
    cout<<sum(3,6)<<endl;
    cout<<sum(5,3,2)<<endl;
    

    return 0;
}   