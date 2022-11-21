//SEARCHING IN ARRAY.

// ******** Linear search ******
// #include<bits/stdc++.h>
// using namespace std;
// int linear_search(int arr[],int n,int key){
	// for(int i=0; i<n; i++){
		// if(arr[i]==key){
			// return i;
		// }
	// }
	// return -1;
// }
// int main(){
	// int n,key;
	// cin>>n>>key;
	
	// int arr[n];
	// for(int i=0; i<n; i++){
		// cin>>arr[i];
	// }
	// cout<<linear_search(arr,n,key)<<endl;
	
	// return 0;
// }


// ****  Binary Search.  ******

// Binary Search in ascending  sorted array
// #include<bits/stdc++.h>
// using namespace std;
// int binary_search(int arr[],int n,int key){
// 	int s=0;
// 	int e=n;
// 	// int e=n-1;
// 	while(s<=e){
// 		int mid=(s+e)/2;
// 		// int mid= s+(e-s)/2;	//this is used to avoid overflow s+e may result in overflow
// 		if(arr[mid]==key){
// 			return mid;
// 		}else if(arr[mid]>key){
// 			e=mid-1;
// 		}else {
// 			s=mid+1;
// 		}
// 	}
// 	return -1;
// }
// int main(){
// 	int n,key;
// 	cin>>n>>key;
// 	int arr[n];
// 	for(int i=0; i<n; i++){
// 		cin>>arr[i];
// 	}
// 	cout<<binary_search(arr,n,key)<<endl;
// 	return 0;
// }


// Binary Search in descending sorted array
// #include<bits/stdc++.h>
// using namespace std;
// int reverse_binary_search(int arr[],int n,int key){
// 	int s=0;
// 	int e=n-1;
// 	while(s<=e){
// 		int mid=s+(e-s)/2;
// 		if(arr[mid]==key){
// 			return mid;
// 		}
// 		else if(arr[mid]>key){
// 			s=mid+1;
// 		}
// 		else{
// 			e=mid-1;
// 		}
// 	}
// 	return -1;
// }
// int main(){
	// int n,key;
	// cout<<"Enter the size of array and key \n";
	// cin>>n>>key;
	// int arr[n];
	// cout<<"Enter the array in decreasing order \n";
	// for(int i=0; i<n; i++){
	// 	cin>>arr[i];
	// }
// 	cout<<reverse_binary_search(arr,n,key)<<endl;
// 	return 0;
// }

// If we are not given whether the array is increasing or decreasing we will compare any two elements of array (arr[0] and arr[1]) and by this we can conclude increasing (if arr[0] < arr[1]) and decreasing (if arr[0] > arr[1])
