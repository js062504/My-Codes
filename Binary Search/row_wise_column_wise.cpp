// Searching in row-wise and column-wise sorted array O(n+m) for arr[n][m]
/*
1 2 3 4
5 6 7 8
9 10 11 12
*/  
#include <iostream>
using namespace std;

int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int key=1;
    int m=3,n=4;
    int i=0,j=n-1;
    int suc=0;
    for(int s=0; s<m; s++){
        for(int t=0; t<n; t++){
            cout<<arr[s][t]<<" ";
        }
        cout<<endl;
    }

    while(i<=m-1 && j>=0){
        if(arr[i][j]==key){
            cout<<i<<" "<<j<<endl;
            suc=1;
            break;
        }
        else if(arr[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }

    if(suc==0){
        cout<<-1<<" "<<-1<<endl;
    }

    return 0;
}