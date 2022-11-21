#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,col;
	cin>>row>>col;
	for(int i=row; i>=1; i--){
		for(int j=1; j<=col; j++){
			if(j<=i){
				cout<<"* ";
			}else{
				cout<<"  ";
			}
		}cout<<endl;
	}
	return 0;
}
//To use different patterns.
//for(int i=1; i<=row; i++)    &  if(j<=i) 
//for(int i=row; i>=1; i--)    &   if(j>=i)     
	