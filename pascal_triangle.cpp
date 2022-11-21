//factorial method
#include<bits/stdc++.h>
using namespace std;
int fact(int a){
	int factorial=1;
	for(int i=1; i<=a; i++){
		factorial*=i;
	}return factorial;
}
int xcr(int x,int r){
	int t;
	t=(fact(x))/((fact(r))*(fact(x-r)));
	return t;
}
int main(){
	int n;
	cout<<"Enter the value of n :";
	cin>>n;
	for(int x=0; x<n; x++){
		for(int r=0; r<=x; r++){
			cout<<xcr(x,r)<<" ";
		}
		cout<<endl;
	}
	return 0;
}

//2-D array method
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int arr[n][n];
		arr[0][0]=1;
		for(int i=1; i<n; ++i){
			arr[i][0]=1;
			arr[i][i]=1;
			for(int j=1; j<i; ++j){
				arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
			}
		}

		for(int i=0; i<n; i++){
			for(int j=0; j<=i; j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}


//2-D array optimised approach
#include <bits/stdc++.h>
using namespace std;
const int N=41;

int main(){
	int t;
	cin>>t;
	long long int arr[N][N];
	arr[0][0]=1;
	for(int i=1; i<N; ++i){
		arr[i][0]=1;
		arr[i][i]=1;
		for(int j=1; j<i; ++j){
			arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
		}
	}
	while(t--){
		int n;
		cin>>n;
		
		for(int i=0; i<n; i++){
			for(int j=0; j<=i; j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}

