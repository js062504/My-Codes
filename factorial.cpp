#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	int factorial = 1;
	for(int i=1; i<=a; i++){
		factorial=factorial*i;	
	}
	cout<<factorial;
	
	return 0;
}
// 2nd method.
#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int fact(int n){
	int factorial=1;
	for(int i=1; i<=n; i++){
		
		factorial=factorial*i;
	}
	return factorial;
}
int main(){
	int n;
	cout<<"Enter the number :";
	cin>>n;
	cout<<fact(n);
	return 0;
}	


