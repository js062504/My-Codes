// pointers(variables that store the address of other variables)
// used to update the value
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=10;
	int *aptr;
	aptr=&a;
	*aptr=20;
	cout<<&a<<endl;
	cout<<*aptr;
	int arr[]={10,20,30};
	cout<<*arr<<endl;
	int *ptr=arr;
	for(int i=0; i<3; i++){
		cout<<*ptr<<endl;
		ptr++;
	}
	return 0;
}