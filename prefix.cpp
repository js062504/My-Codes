#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int prefixEvaluation(string str){
    stack<int> s;
    for(int i=str.length()-1; i>=0; i--){
        if(str[i]>='0' && str[i]<='9'){
            s.push(str[i]-'0');
        }
        else{
            int op1=s.top();
            s.pop();
            int op2=s.top();
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
    // Prefix--> operator operand1 operand2
    // we use stack to evaluate prefix,infix and postfix expresiion
    // - + 7 * 4 5 + 2 0
    // ans. 25

    string str;
    cin>>str;
    cout<<prefixEvaluation(str)<<endl;
    return 0;
} 