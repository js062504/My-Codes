//max of three numbers.
#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a<<" is the largest"<<endl;
        }else{
            cout<<c<<" is the largest"<<endl;
        }
        
    }
    else{
        if(b>c){
            cout<<b<<" is largest"<<endl;
        }
        else{
            cout<<c<<" is largest\n";
        }
    }
    

    return 0;
}
