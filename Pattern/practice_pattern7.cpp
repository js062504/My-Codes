#include<string>
#include<iostream>

using namespace std;
int main(){
	int row,col;
	cout<<"Enter the no of rows & columns :";
	cin>>row>>col;
	for(int i=1; i<=row; i++){
		for(int k=1; k<=(row-i)+1; k++){
			cout<<" ";
		}
		for(int j=1; j<=col; j++){
			cout<<"* ";
		}
		cout<<endl;
	}		
	return 0;
}

//2nd method.
/*#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=(n-i); j++){
			cout<<" ";
		}
		for(int j=1; j<=n; j++){
			cout<<"*";
		}
		cout<<endl;
		
	}
	return 0;
}*/