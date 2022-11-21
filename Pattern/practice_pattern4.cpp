#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,col;
	cout<<"Enter the rows,columns :"<<endl;
	cin>>row>>col;
	int n=1;
	for(int i=1; i<=row; i++){
		for(int j=col; j>=i; j--){
			cout<<n<<" ";
			n=n+1;
			
		}n=1;
		cout<<endl;
	}
	return 0;
}
