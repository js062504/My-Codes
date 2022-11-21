// An element is nearly sorted if it is at (i or i+1 or i-1) index if its original pos is i
int s=0;
int e=n-1;
while(s<=e){
    int mid=s+(e-s)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid-1]==x && mid-1>=s){
        return mid-1;
    }
    else if(arr[mid+1]==x && mid+1<=e){
        return mid+1;
    }
    else if(arr[mid]>x){
        e=mid-2;
    }
    else if(arr[mid]<x){
        s=mid+2;
    }
}