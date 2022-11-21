// It works for all sorted as well as unsorted array
bool isValid(int A[],int N, int M,int mid){
    int student=1;
    int sum=0;
    for(int i=0; i<N; i++){
        if(sum+A[i] <= mid){
            sum+=A[i];
        }
        else{
            student++;
            if(student>M || A[i]>mid){
                return false;
            }
            sum=0;
            sum+=A[i];
        }
    }
    return true;
}

int findPages(int A[], int N, int M) 
{
    int start=0;
    int sum=0;
    for(int i=0; i<N; i++){
        sum+=A[i];
    }
    int end=sum;
    
    int res=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(isValid(A,N,M,mid)==true){
            res=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    
    return res;
    
}