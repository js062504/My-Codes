#include<iostream>
using namespace std;
int main(){
	//sum of digits of numbers.
	//take how many numbers you want to take.
	//after that input them and find their sum.
	
	int a;
	cin>>a;
	for(int i=1; i<=a; i++){
		
		int b;
		cin>>b;
		int c=0;
		while(b>0){
			
			c=c+b%10;
			b=b/10;
		}cout<<c<<endl;
	}	

	
	return 0;
}