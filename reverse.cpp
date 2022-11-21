#include<iostream>
using namespace std;
int main(){
	int a;
	//reverse and palindrome.
	
	cin>>a;
	int b=0;
	int i=a;
	while(a>0){
		b=b*10+a%10;
		a=a/10;
	}
	
	if(b==i){
		cout<<"palindrome";
	}
	else{
		cout<<"not palindrome";
	}
	

	return 0;
	
}
