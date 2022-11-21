#include <iostream>
using namespace std;

// int sum_array(int arr[],int sum,int i,int n){
//     if(i==n){
//         return sum;
//     }
//     sum+=arr[i];
//     i=i+1;
//     return sum_array(arr,sum,i,n);

// }

int digit_sum(int n){
    if(n==0){
        return 0;
    }
    return n%10 +digit_sum(n/10);
}


int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // int sum=0;
    // int i=0;
    // cout<<"Sum of the numbers of array is "<<sum_array(arr,sum,i,n)<<endl;

    cout<<"Enter a number: "<<endl;
    int num;
    cin>>num;
    cout<<digit_sum(num)<<endl;
    
    return 0;
}