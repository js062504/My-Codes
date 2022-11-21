#include <iostream>
#include <vector>
using namespace std;

vector<int> find(int arr[], int n , int x )
{
    vector<int> v;
    
    int f_ind=-1;
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==x){
            f_ind=mid;
            e=mid-1;
        }
        else if(arr[mid]>x){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    v.push_back(f_ind);
    
    int r_ind=-1;
    int r=0;
    int re=n-1;
    while(r<=re){
        int mid=r+(re-r)/2;
        if(arr[mid]==x){
            r_ind=mid;
            r=mid+1;
        }
        else if(arr[mid]>x){
            re=mid-1;
        }
        else{
            r=mid+1;
        }
    }
    v.push_back(r_ind);
    
    return v;
    // code here
}

int main(){
    int n,x;
	cout<<"Enter the size of array and key \n";
	cin>>n>>x;
	int arr[n];
	cout<<"Enter the array \n";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
    vector<int> v=find(arr,n,x);

    printf("First occurence of %d is at index %d and Last occurence is at index %d \n",x,v[0],v[1]);

    return 0;
}