// For Ascending array - last element is the peak
// For Descending array - first element is the peak
// For an array with all elements equal - all elements are peak

// In an bitonic array (first increasing then decreasing) peak element is just similar like this que. and to search an element in an array we will break it down into 2 arrays 1 ascending sorted another descending sorted
#include <iostream>
using namespace std;

int peakElement(int arr[], int low, int high, int n){
    int mid=low+(high-low)/2;
    if((mid==0 || arr[mid]>=arr[mid-1]) && (mid==n-1 || arr[mid]>=arr[mid+1])){
        return mid;
    }
    else if(mid >0 && arr[mid-1]>arr[mid]){
        return peakElement(arr,low,mid-1,n);
    }
    else{
        return peakElement(arr,mid+1,high,n);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<peakElement(arr,0,n-1,n)<<endl;

    return 0;
}