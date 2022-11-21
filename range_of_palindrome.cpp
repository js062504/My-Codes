//range of palindrome.
//also count the no of palindromes.
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter the range "<<endl;
	cin>>a>>b;
	int count=0;
	for(int i=a; i<=b; i++){
		int c=i;
		int d=0;
		
		while(c>0){
			d=d*10+c%10;
			c=c/10;
			
		}
		if(i==d){
			
			count=count+1;
			cout<<i<<" ";
			
		}
	}cout<<endl;
	cout<<count;
	
	return 0;
}
