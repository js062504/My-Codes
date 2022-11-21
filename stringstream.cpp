#include <bits/stdc++.h>
// #include <sstream>
// #include <string>
using namespace std;

int main(){
    // Converting Integer to String 
    /* int num=20;
    string str;
    stringstream strstrm;
    strstrm<<num;   //Insertion operator"<<"  
    str=strstrm.str();      //Put string prepared by stringstream into str.
    cout<<str<<endl; */   
    // Converting String to Integer
    /* int ans;
    string str_num="345";
    stringstream sstm;
    sstm<<str_num;
    sstm>>ans;
    cout<<ans+1<<endl; */
    string str="23,4,56";
    stringstream ss;
    ss<<str;
    // char ch;
    // int a, b, c;
    // ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56
    // cout<<a<<b<<c;
    vector<int> v;
    int t=3;
    while(t--){
        int a;
        char ch;
        ss>>a;
        v.push_back(a);
        ss>>ch;
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}