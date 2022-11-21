#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        stack<char> s;
        int flag=0;
        
        for(int i=0; i<n; i++){
            if(str[i]=='H' || str[i]=='T'){
                if(s.empty()){
                    if(str[i]=='T'){
                        cout<<"Invalid\n";
                        flag=1;
                        break;
                    }
                    else{
                        s.push(str[i]);
                    }
                }
                else{
                    if(str[i]!=s.top()){
                        s.pop();
                    }
                    else{
                        cout<<"Invalid\n";
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==0){
            if(s.empty()){
                cout<<"Valid\n";
            }
            else{
                cout<<"Invalid\n";
            }
        }
        
    }
	// your code goes here
	return 0;
}
