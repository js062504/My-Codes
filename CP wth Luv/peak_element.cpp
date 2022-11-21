// peak element is a element of an array which is greater than both its adjacent index values (if they exists).
// Que. given an array return the index of any one peak element of the array

// APPROACH-1   O(N)
// #include <iostream>
// using namespace std;

// int findPeak(int arr[],int n){
//     if(n==1){
//         // In an array of 1 element the element will always be peak
//         return 0;
//     }
//     for(int i=0; i<n; i++){
//         if(i==0){
//             if(arr[i]>arr[i+1]){
//                 return i;
//             }
//         }
//         else if(i==n-1){
//             if(arr[i]>arr[i-1]){
//                 return i;
//             }
//         }
//         else{
//             if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
//                 return i;
//             }
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[6]={2,4,6,8,12};
//     int n=6;
//     // 14 and 12 are peak elements
//     cout<<findPeak(arr,n)<<endl;

//     return 0;
// }

// APPROACH-2 Binary Search O(log n)
#include <iostream>
using namespace std;

int main(){

    
    
    return 0;
}