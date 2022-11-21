//armstrong number- a number sum of the cube of its digits
// is equal to the number itself.
//eg.153.
//(iostream),(cmath),(bits/stdc++.h)
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter the number"<<endl;
	cin>>a;
	int i=a;
	int c=0;
	while(a>0){
		int b;
		b=a%10;
		c=c+pow(b,3);
		a=a/10;
	}
	cout<<c<<endl;
	if(i==c){
		cout<<"the number is armstrong"<<endl;
	}else{
		cout<<"try again!"<<endl;
	}
	return 0;
}