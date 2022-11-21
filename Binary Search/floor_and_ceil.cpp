// slight variation in floor and ceil based can be asked by th statement that
// there is an array (obviously sorted) and key & find the minimum abs diff. element
// find floor and ceil of key, compare their abs diff  and as per this one with minimum is the answer 

//in case of duplicates floor give the last occurrence and ceil give the first occurence 


// floor
int s=0;
int e=n-1;
int res=-1;
while(s<=e){
    int mid = s+(e-s)/2;
    if(arr[mid]==x){
        return arr[mid];
    }
    else if(arr[mid]<x){
        res=arr[mid];
        s=mid+1;
    }
    else{
        e=mid-1;
    }
}

// ceil for integer
int s=0;
int e=n-1;
while(s<=e){
    int mid = s+(e-s)/2;
    if(arr[mid]==x){
        return arr[mid];
    }
    else if(arr[mid]>x){
        res=arr[mid];
        e=mid-1;
    }
    else{
        s=mid+1;
    }

}

// ceil for character(next alphabet problem)
int s=0;
int e=n-1;
char res = '#';
// x and res are char
while(s<=e){
    int mid = s+(e-s)/2;
    if(arr[mid]>x){
        res=arr[mid];
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    
}
