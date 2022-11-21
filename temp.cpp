#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        char c='a';
        vector<char> v;
        int count=0;
        if(n==1 && x==1){
            cout<<c<<endl;
        }
        else{
            if(n%2==0){
                if(x>n/2){
                    cout<<-1<<endl;
                }
                else{
                    for(int i=1; i<=n/2; i++){
                        v.push_back(c);
                        cout<<c;
                        if(count==x){

                        }
                        else{
                            c++;
                            count++;
                        }

                    }

                    int h=v.size();
                    for(int i=h-1; i>=0; i--){
                        cout<<v[i];
                    }
                    cout<<endl;
                }
            }
            else{
                int p=(n/2)+1;
                if(x>p){
                    cout<<-1<<endl;
                }
                else{
                    for(int i=1; i<=p; i++){
                        if(i==p){

                        }
                        else{
                            v.push_back(c);

                        }
                        cout<<c;
                        if(count==x){

                        }
                        else{
                            c++;
                            count++;
                        }
                    }

                     int h=v.size();
                    for(int i=h-1; i>=0; i--){
                        cout<<v[i];
                    }
                    cout<<endl;
                }

            }
        }


    }
    
    return 0;
}