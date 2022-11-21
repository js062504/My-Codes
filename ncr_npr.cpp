#include<bits/stdc++.h>
using namespace std;
int fact(int a){
	int factorial=1;
	for(int i=1; i<=a; i++){
		factorial=factorial*i;
	}return factorial;
}
int ncr(int n, int r){
	int x;
	x=(fact(n))/((fact(r))*(fact(n-r)));
	return x;
}
int npr(int n,int r){
	int y;
	y=(fact(n))/(fact(n-r));
	return y;
}
int main(){
	int n,r;
	cout<<"Enter n and r :";
	cin>>n>>r;
	if(r>n){
		cout<<"DNE"<<endl;
	}
	else{
		cout<<"the value of ncr is "<<ncr(n,r)<<endl;
		cout<<"The value of npr is "<<npr(n,r)<<endl;
	}
	
	return 0;
}

