bool isPossible(int arr[],int n,int k,int mid){
    int boardSum=0;
    int painterCount=1;
    for(int i=0; i<n; i++){
        if(boardSum+arr[i] <= mid){
            boardSum+=arr[i];
        }
        else{
            painterCount++;
            if(painterCount>k || arr[i]>mid){
                return false;
            }
            boardSum = 0;
            boardSum+= arr[i];
        }
    }
    return true;
}

long long minTime(int arr[], int n, int k)
{
    int s=0;
    long long int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    long long int e=sum;
    long long res=-1;
    
    while(s<=e){
        long long int mid=s+(e-s)/2;
        if(isPossible(arr,n,k,mid)){
            res=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    
    return res;
}