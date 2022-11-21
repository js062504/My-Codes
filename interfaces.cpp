// Interface --> Abstract Classes --> Pure Virtual Functions
// Ques. given a number n find the sum of its divisors from 1 to n.
// 1st Method.
/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};
class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        int sum=0;
        for(int i=1; i<=n; i++){
            if(n%i==0){
                sum+=i;
            }
        }
        return sum;
        
    }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}
*/

// 2nd Method
