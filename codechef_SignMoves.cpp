// Sign Moves
// 1.Optimised Approach Mathematical formula
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         long long int n;
//         cin>>n;
//         long long int terms=n/2;
//         long long int se=0,so=0;
        
//         se=(1LL*terms*(4+(terms-1)*2))/2;
//         so=(1LL*n*(n+1))/2 - se;
//         cout<<(se-so)<<endl;
       
//     }
    
// 	return 0;
// }

// 2. Direct Approach with a better logic
// #include <bits/stdc++.h>
// #define int long long
// using namespace std;

// int32_t main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int ans = (n+1)/2;
//         cout<<((n&1) ? -ans : ans)<<endl;
//     }

//     return 0;
// }