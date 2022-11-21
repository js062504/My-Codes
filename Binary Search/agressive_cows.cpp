bool isPossible(vector<int> &stalls,int k,int mid){
    int cowCount=1;
    int lastPos=stalls[0];
    for(int i=0; i<stalls.size(); i++){
        if(stalls[i]-lastPos >= mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPos=stalls[i];
        }
    }
    return false;
}

int agressiveCows(vector<int> &stalls,int k){

    sort(stalls.begin(),stalls.end());
    int s=0;
    int maxi=-1;
    for(int i=0; i<stalls.size(); i++){
        maxi = max(maxi,stalls[i]);
    }
    int e=maxi;
    int ans=-1;

    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(stalls,k,mid)){
            ans=mid;
            s=mid+1;        // coz. here we have to find the largest possible distance 
            // e=mid-1      // as usual if we are asked the minimum distance
        }
        else{
            e=mid-1;
        }
        return ans;
    }

}