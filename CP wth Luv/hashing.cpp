// Ques. Find the no. of count of any number entered by the user from the array entered by the user.
// 1<= n <=10^5
// 1<= q <=10^5
// 1<= a[i] <=10^7
// POINT TO NOTE: VALUE OF a[i] CANNOT EXCEED 10^7 AS WE CANNOT CREate AN ARRAY OF SIZE MORE THAN 10^7 
// Global array is always initialised to zero

// Naive Approach ---> O(n*q)
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;     //size of array
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int q;
    cin>>q;     //No. of Queries
    while(q--){
        int x;
        cin>>x;
        int count=0;
        for(int i=0; i<n; i++){
            if(arr[i]==x){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}*/

// Hashing  --->O(q) is a pre-computation technique
// We will store the count of a variable along with input in array in some another array and the value of variable will be the index of that array and value at that index is count of that variable.
// #include <iostream>
// using namespace std;
// const int N = 1e7+1;
// int hsh[N];

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//         hsh[arr[i]]++;
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         int x;
//         cin>>x;
//         cout<<hsh[x]<<endl;
//     }
//     return 0;
// }

// For negative numbers in array 
// arr[]={-1,-3,-3,-1,6,8,-4,6,-6}
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e7+1;
// int hsh[N];

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int maxno=INT_MIN;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//         maxno=max(maxno,abs(arr[i]));
//     }
//     for(int i=0; i<n; i++){
//         arr[i]=arr[i]+maxno;
//         hsh[arr[i]]++;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int n;
//         cin>>n;
//         cout<<hsh[maxno+n]<<endl;
//     }

//     return 0;
// }

// given array of n numbers. given q queries and in each query given l to r and find the sum of array elements from l to r 
// Naive approach   O(N^2)
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=1; i<=n; i++){
//         cin>>arr[i];
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         int l,r;
//         cin>>l>>r;
//         long long int sum=0;
//         for(int i=l; i<=r; i++){
//             sum+=arr[i];

//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }

// Optimised Approach(Pre-computation using prefix sum)
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e7+1;
// int arr[N];
// int hsh[N];

// int main(){
//     int n;
//     cin>>n;
//     long long sum=0;
//     int j=1;
//     for(int i=1; i<=n; i++){
//         cin>>arr[i];
//         sum+=arr[i];
//         or we can directly input to hsh array instead of storing in sum ----> (hsh[i] = hsh[i-1]+arr[i])                 
//         hsh[j]=sum;
//         j++;
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         int l,r;
//         cin>>l>>r;
//         cout<<hsh[r]-hsh[l-1]<<endl;
//     }

    
//     return 0;
// }

// 2d-arrays
// long long is equivalent to long long int
// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e7+1;
// int ar[N][N];
// long long pf[N][N];

// int main(){
//     int n;
//     cin>>n;
//     int arr[n][n];
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cin>>ar[i][j];
//             pf[i][j] = ar[i][j] + pf[i-1][j] + pf[i][j-1] + pf[i-1][j-1];
//         }
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         int a,b,c,d;
//         cin>>a>>b>>c>>d;
//         // Naive Approach
//         /*long long sum=0;
//         for(int i=a; i<=c; i++){
//             for(int j=b; j<=d; j++){
//                 sum+=ar[i][j];
//             }
//         }
//         cout<<sum<<endl;*/
//         // Optimised Approach
//         cout<< (pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1] ) <<endl; 

//     }

//     return 0;
// }

// time complexity of __gcd(a,b) is log(max(a,b))
// prefix gcd
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
        
//         int n,q;
//         cin>>n>>q;
//         int arr[n+10];
//         int fwd[n+10];
//         int bwd[n+10];
//         fwd[0]=bwd[n+1]=0;
//         for(int i=1; i<=n; i++){
//             cin>>arr[i];
//         }
    
//         for(int i=1; i<=n; ++i){
//             fwd[i]=__gcd(fwd[i-1],arr[i]);
//         }
        
//         for(int i=n; i>=1; --i){
//             bwd[i]=__gcd(bwd[i+1],arr[i]);
        
//         }
    
//         while(q--){
//             int l,r;
//             cin>>l>>r;
//             cout<< __gcd(fwd[l-1],bwd[r+1]) <<endl;
//         }
//     }


//     return 0;
// }
