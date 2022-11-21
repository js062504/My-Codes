#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1,n2;
    cin>>n1>>n2;
    int i=min(n1,n2);
    int count=0;
    while(i!=1){
        if(n1%i==0 && n2%i==0){
            cout<<i<<" is the gcd of "<<n1<<" and "<<n2<<endl;
            count++;
            break;
        }
        i--;
    }
    if(count==0){
        cout<<"1 is the gcd of these numbers"<<endl;
    }
	// your code goes here
	return 0;
}
