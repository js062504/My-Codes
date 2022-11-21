#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={4,5,2,25,7,8};
    int n=6;

    // O(N^2)
    // vector<int> v;
    // for(int i=0; i<n; i++){
    //     int maxno=-1;
    //     int g=i+1;
    //     while(g<n){
    //         if(arr[g]>arr[i]){
    //             maxno=arr[g];
    //             break;
    //         }
    //         else{
    //             g++;
    //         }
            
    //     }
    //     v.push_back(maxno);
    // }

    // for(int i=0; i<n; i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<"\n";

    // O(N)
    int ans[n];
    stack<int> s;
    // stack will store index of element
    for(int i=0; i<n; i++){
        while(!s.empty() && arr[i]>arr[s.top()]){
            ans[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        ans[s.top()]=-1;
        s.pop();
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "<<(ans[i]==-1 ? -1 : arr[ans[i]])<<"\n";
    }

    return 0;
}