// Day 28(HackerRank)
// regex is used to check whether a substring is present in the array or not.
#include <regex>
#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string firstName;
    string emailId;
    list<string> v;
    while(n--){
        cin>>firstName>>emailId;
        if(regex_match(emailId,regex(".+@gmail.com"))){
            v.push_back(firstName);
        }
    }
    v.sort();
    while(!v.empty()){
        cout<<v.front()<<endl;
        v.pop_front();
    }
    
    return 0;
}