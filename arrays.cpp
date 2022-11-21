// INPUTING OF ARRAY AND FINDING MAX AND MIN.

#include <iostream>
#include<limits.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array :"<<endl;
	cin>>n;
	int arr[n];
	int maxno=INT_MIN;
	int minno=INT_MAX;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		// if(arr[i]>maxno){
		// 	maxno=arr[i];
		// }if(arr[i]<minno){
		// 	minno=arr[i];
		// }
		maxno=max(arr[i],maxno);
		minno=min(arr[i],minno);
	}
	cout<<maxno<<" "<<minno<<endl;
	
	return 0;
}
