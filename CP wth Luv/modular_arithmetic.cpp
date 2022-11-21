// (a+b)%m = ((a%m) + (b%m))%m
// (a*b)%m = ((a%m) * (b%m))%m
// (a-b)%m = ((a%m) - (b%m) + m)%m
// (a/b)%m = ((a%m) * (b^-1)%m)%m

// Print the factorial for a number enterd by t testcases .
// Print the answer modulo (10^9 + 7)
// #include <iostream>
// // #define M 1000000007 
// using namespace std;
// const int M=1e9+7;
// const int N=1e5+10;
// long long fact[N];

// int main(){
//     fact[0]=fact[1]=1;
//     for(int i=2; i<=N; i++){
//         fact[i] = (i*fact[i-1])%M;
//     }
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         cout<<fact[n];
//     }
//     return 0;
// }

