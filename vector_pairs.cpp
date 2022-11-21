// Vector
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(2,6);
    // 6 6
    vector<int> v1(6,2);
    // 2 2 2 2 2 2
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // ******** vector<vector<int>> v(3); ******
    vector<vector<int>> v(3);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int x=0;
            v[i].push_back(x);
        }
        
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
	
	return 0;
}


// Pair
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string> p;
    p=make_pair(2,"abc");
    p={2,"abd"};

    pair<int,string> p1=p;
    // Not change the p.first as it the copy of pi is passed (Call by Value)
    // p1.first=3;
    // To avoid it we can pass by reference
    // pair<string,int> &p1=p;

    cout<<p1.first<<" "<<p1.second<<endl;

    vector<int> v;
    v.push_back(2);
    vector<int> v1;
    v1=v;
    vector<int> v[n];   //array of vectors
    vector<vector<int>> v;  //vector of vector
    
    v1[0]=3;
    cout<<v[0]<<endl;
    cout<<v1[0]<<endl;

    return 0;
}

// Iterator
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){    
    vector<int> v={1,4,7,8};
    for(int val: v){
        // Keep printing the vector elements
        cout<<val<<endl;
        // 1 4 7 8
    }

    // in this copy of v is passed and thus, to make changes in the original vector pass it by reference
    for(int &val: v){
        cout<<v<<endl;
    }

    // auto replaces vector<int> :: iterator it;
    return 0;
}