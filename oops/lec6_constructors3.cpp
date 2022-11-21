#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class BankDeposit{
    int principal,time;
    double simple_interest,rate;
    public:
    BankDeposit(int p,int t,int r);
    BankDeposit(int p,int t,double R);
};

BankDeposit :: BankDeposit(int p,int t,int r){
    principal=p;
    time=t;
    rate=(float)r/100;
    simple_interest=(float)principal*time*rate/100;
    cout<<"The Amount after "<<time<<" years is as follows : "<<principal+simple_interest<<endl; 
}

BankDeposit :: BankDeposit(int p,int t,double R){
    principal=p;
    time=t;
    rate=R;
    simple_interest=principal*time*rate/100;
    cout<<"The Amount after "<<time<<" years is as follows : "<<principal+simple_interest<<endl;
}
int main(){
    // BankDeposit money(100,1,4);
    BankDeposit money(100,1,0.04);
    return 0;
}