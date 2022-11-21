#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    string str;
    char ch;
    while(t--){
        cin>>str;
        cin>>ch;
        int count=0;
        for(int i=0; i<str.length(); i++){
            if(str[i]==ch){
                int p=i-0;
                int q=str.length()-1-i;
                if(p%2==0 && q%2==0){
                    cout<<"YES"<<endl;
                    count++;
                    break;
                }
            }
        }
        if(count==0){
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}