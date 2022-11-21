// Alternating String
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int count_zero=0,count_one=0,ans=0;
        for(int i=0; i<n; ++i){
            if(str[i]=='0'){
                count_zero++;
            }
            else{
                count_one++;
            }
        }
        
        // This can be avoided just by writing cout<<(2*min(count_zero,count_one) + (count_zero!=count_one) )<<endl;
        if(count_zero==count_one){
            cout<<(2*min(count_one,count_zero));
        }
        else{
            cout<<(2*min(count_one,count_zero) + 1);
        }
        
    }

    return 0;
}