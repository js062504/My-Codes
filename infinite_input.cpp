#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin>>k;
    map<int,int> m;
    vector<int> v;
    
    int n;
    while(cin>>n){
        v.push_back(n);
        m[n]++;
    }
    for(auto itr=m.begin(); itr!=m.end(); itr++){
        if(itr->second!=k){
            cout<<itr->first<<endl;
        }
    }
	
	return 0;
}
