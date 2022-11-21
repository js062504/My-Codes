#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter the range of numbers"<<endl;
	cin>>a>>b;

	int count=0;
	for(int i=a; i<=b; i++){
		int c=i;
		int e=0;
		while(c>0){
			int d;
			d=c%10;
			c=c/10;
			e=e+pow(d,3);
		}
		if(i==e){
			count=count+1;
			cout<<e<<" ";
		}
	}cout<<endl;
	cout<<count;
	
	
	return 0;
}