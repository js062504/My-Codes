#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

void fib(int n){
	int a1=0;
	int a2=1;
	int nextterm;
	for(int i=1; i<=n; i++){
		cout<<a1<<" ";
		nextterm=a1+a2;
		a1=a2;
		a2=nextterm;
	}return;
}

int main(){
	
	int n;
	cin>>n;
	
	fib(n);
	return 0;
}
