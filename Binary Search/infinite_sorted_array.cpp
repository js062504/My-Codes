int start=0;
int end=1;
while(key>arr[end]){
    start=end;
    end=end*2;
}
// implement binary search for (arr,start,end)

// variation combining concept of first occurrence and infinite binary array
// find the first occurrence index of 1 in infinite sorted array