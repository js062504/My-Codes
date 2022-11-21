#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class simpleCalculator{
    int a,b;
    public:
    void setValue(int c,int d){
        a=c;
        b=d;
    }
    void process(){
        cout<<"Addition: "<<a+b<<endl;
        cout<<"Subtraction: "<<a-b<<endl;
        cout<<"Multiplication: "<<a*b<<endl;
        cout<<"Division: "<<(float)a/b<<endl;
    }
};

class scientificCalculator{
    int g,h;
    public:
    void setScientificValue(int p,int q){
        g=p;
        h=q;
    }
    void processScientific(void){
        cout<<g<<" raised to the power "<<h<<" is equal to "<<pow(g,h)<<endl;
        cout<<h<<" raised to the power "<<g<<" is equal to "<<pow(h,g)<<endl;
        cout<<"sin(g) = "<<sin(g)<<" & sin(h) = "<<sin(h)<<endl;
    }
};

class hybridCalculator : public simpleCalculator, public scientificCalculator{
    int j,k;
    public:
    void setVal(int s,int t){
        j=s;
        k=t;
        
    }
    void ansDisplay(){
        cout<<"Entered numbers were: "<<j<<" and "<<k<<endl;
        
    }
};
int main(){
    hybridCalculator h1;
    // Simple Calculator
    h1.setValue(2,4);
    h1.process();
    // Scientific Calculator
    h1.setScientificValue(5,2);
    h1.processScientific();
    // Hybrid Calculator
    h1.setVal(1,6);
    h1.ansDisplay();
    return 0;
}