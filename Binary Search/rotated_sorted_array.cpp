// No of times a sorted array is rotated
int findKRotation(int arr[], int n) {

    int s=0;
    int e=n-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        // next and prev are used to make it rotated on first and last index
        int prev = (mid+n-1)%n;
        int next = (mid+1)%n;
        
        if(arr[mid]<=arr[prev] && arr[mid]<=arr[next]){
            return mid;
        }
        else if(arr[s]<=arr[mid] && arr[mid]<=arr[e]){
            return s;
        }
        else if(arr[s]<=arr[mid]){
            s=mid+1;
        }
        else if(arr[mid]<=arr[e]){
            e=mid-1;
        }
    }

    return -1;

}

// If we are rotaing array in clockwise direction then no. of times array rotated is equal to (n-mid) and for counter-clockwise(anti-clockwise) mid will be the ans. 

// if we have to return count of a number in rotated sorted array 
// run two loops(Binary Search) 1 from (s=0 to e=mid-1) and 2nd from (s=mid+1 to e=size-1)