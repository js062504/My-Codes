#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=20;
    int b=30;
    cout<<a<<" "<<b<<endl;
    
    // 1st method
    /*a=a+b;
    b=a-b;
    a=a-b;*/

    // 2nd method using xor
    a=a^b;
    b=a^b;
    a=a^b;
    
    cout<<a<<" "<<b<<endl;
	// your code goes here
	return 0;
}
