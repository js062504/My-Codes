// prefix-sum
#include <bits/stdc++.h>
using namespace std;

const int N=1e7+10;
long long arr[N];
// Global array is always initialised to 0

int main(){
    int n,m;
    cin>>n>>m;
    while(m--){
        int l,r,d;
        cin>>l>>r>>d;
        arr[l]+=d;
        arr[r+1]-=d;
    }
    long long prsum=0;
    for(int i=1; i<=n; i++){
        prsum+=arr[i];
        arr[i]=prsum;
    }
        
    long long ans=-1;
    for(int i=1; i<=n; i++){
        ans=max(ans,arr[i]);
    }
    
    cout<<ans<<endl;
    
    return 0;
}
