// Que-1. You are given an array of length n-1 which contain numbers from 1 to n each ocurring only once and you have to tell the number which is not present in the array

// APPROACH-1 
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     printf("Enter the size of array\n");
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array of size "<<n-1<<endl;
//     int sum1=0;
//     for(int i=0; i<n-1; i++){
//         cin>>arr[i];
//         sum1+=arr[i];
//     }

//     int sum2=(n*(n+1))/2;
//     printf("The missing number is %d \n",sum2-sum1);

    
//     return 0;
// }

// APPROACH-2
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     printf("Enter the size of array\n");
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array of size "<<n-1<<endl;
//     for(int i=0; i<n-1; i++){
//         cin>>arr[i];   
//     }

//     int a=0;
//     for(int i=0; i<n-1; i++){
//         a=a^arr[i];
//     }

//     int b=0;
//     for(int i=1; i<=n; i++){
//         b=b^i;
//     }

//     printf("The missing number is %d \n",a^b);

//     return 0;
// }

// APPROACH-3 (Naive)
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main(){
//     int n;
//     printf("Enter the size of array\n");
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array of size "<<n-1<<endl;
//     for(int i=0; i<n-1; i++){
//         cin>>arr[i];   
//     }

//     // sort the array
//     sort(arr,arr+n-1);
//     int j=1;
//     for(int i=0; i<n-1; i++){
//         if(arr[i]!=j){
//             printf("The missing number is %d \n",j);
//         }
//         else{
//             j++;
//         }
//     }
    
//     return 0;
// }

// Que-2. You are given an array of length n+1 which contain numbers from 1 to n all numbers except one occur once in the array and u have to tell the number which is coming twice

// APPROACH-1 
// #include <iostream>
// #include <map>
// using namespace std;

// int main(){
    // int n;
    // printf("Enter the size of array: \n");
    // cin>>n;
    // int arr[n+1];
    // printf("Enter the elements of array of size %d\n",n+1);
    // map<int,int> m;
    // for(int i=0; i<=n; i++){
    //     cin>>arr[i];
    //     m[arr[i]]++;
    // }

//     for(auto itr=m.begin(); itr!=m.end(); itr++){
//         if(itr->second==2){
//             printf("The number occuring twice is %d \n",itr->first);
//             break;
//         }
//     }
    
//     return 0;
// }

// APPROACH-2
// #include <iostream>
// using namespace std;

// int main(){
    // int n;
    // printf("Enter the size of array: \n");
    // cin>>n;
    // int arr[n+1];
    // printf("Enter the elements of array of size %d\n",n+1);
    // int a=0;
    // for(int i=0; i<=n; i++){
    //     cin>>arr[i];
    //     a=a^arr[i];
    // }

//     int b=0;
//     for(int i=1; i<=n; i++){
//         b=b^i;
//     }

//     printf("The number occuring twice is %d \n",(a^b));

//     return 0;
// }

// APPROACH-3
#include <iostream>
using namespace std;

int main(){
    int n;
    printf("Enter the size of array: \n");
    cin>>n;
    int arr[n+1];
    printf("Enter the elements of array of size %d\n",n+1);
    int sum1=0;
    for(int i=0; i<=n; i++){
        cin>>arr[i];
        sum1+=arr[i];
    }

    int sum2=(n*(n+1))/2;
    printf("The number occuring twice is %d \n",sum1-sum2);

    return 0;
}