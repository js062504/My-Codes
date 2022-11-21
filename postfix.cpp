#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int postfixEvaluation(string str){
    stack<int> s;
    for(int i=0; i<str.length(); i++){
        if(str[i]>='0' && str[i]<='9'){
            s.push(str[i]-'0');
        }
        else{
            int op2=s.top();
            s.pop();
            int op1=s.top();
            s.pop();
            
            switch(str[i]){
                case '+':
                s.push(op1+op2);
                break;
                case '-':
                s.push(op1-op2);
                break;
                case '*':
                s.push(op1*op2);
                break;
                case '/':
                s.push(op1/op2);
                break;
                case '^':
                s.push(pow(op1,op2));
                break;

            }

        }
    }
    return s.top();
}
int main(){
    string str;
    cin>>str;
    cout<<postfixEvaluation(str)<<endl;
    return 0;
} 