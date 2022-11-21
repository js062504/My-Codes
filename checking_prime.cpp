#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	if(a==1){
		cout<<"non prime\n";
	}
	else{
		int i;
		for(i=2; i<a; i++){
			if(a%i==0){
				cout<<"non prime"<<endl;
				break;
			}
		}
		if(i==a){
			cout<<"prime"<<endl;
		}	

	}
		

	return 0;
}
