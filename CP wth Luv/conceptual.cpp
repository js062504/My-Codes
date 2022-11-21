#include <bits/stdc++.h>
using namespace std;

// void Swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }

void Swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){

    // long long int a,b;
    // int a,b;
    // cin>>a>>b;
    // cout<<(long long int)a*b<<endl;
    // cout<<a*1LL*b<<endl;

    // Infinite loop 
    // while(true){
    //     cout<<1<<endl;
    // }
    // while(1){
    //     cout<<1<<endl;
    // }
    // for(;;){
    //     cout<<1<<endl;
    // }

    // Life,Universe and everything
    // while(1){
    //     int a;
    //     cin>>a;
    //     if(a==42){
    //         break;
    //     }
    //     else{
    //         cout<<a<<endl;
    //     }
    // }

    // string str="Hello";
    // cout<<str.size()<<" "<<str.length()<<endl;
    // int t;
    // cin>>t;
    // cin.ignore();
    // while(t--){
    //     string s;
    //     getline(cin,s);
    //     cout<<s<<endl;
    // }

    // string str;
    // cin>>str;
    // string str_rev;
    // for(int i=str.length()-1; i>=0; i--){
    //     // str_rev+=str[i];    // but it is said not to be a good practice
    //     // ALTERNATIVE OR A BETTER APPROACH
    //     str_rev.push_back(str[i]);
    // }
    // cout<<"Original string: "<<str<<endl;
    // cout<<"Reversed string: "<<str_rev<<endl;

    // ******WHY (str.push_back(str2[i])) better than (str+=str2[i])******
    // s.push_back has time complexity O(1) for each entry till end 
    // whereas str+=... has time complexity O(str.size()) becoz it creats a copy of string then add one character to it but its size get increases that's why push_back is better


    // Extracting number from string
    // string s;
    // cin>>s;     //12345678987654321
    // int last_digit=s[s.length()-1]-'0';
    // // if we print by typecasting it will show its ascii value
    // cout<<last_digit<<endl;

    // Size of an array locaaly is upto 10^5 and globally is 10^7 just we have to write 'const' also ----->
    // const int n=1e7; 
    // int arr[n];

    int a=4;
    int b=5;
    // cout<<a<<" "<<b<<endl;
    // Swap(&a,&b);
    // cout<<a<<" "<<b<<endl;

    // Arrays are always passed by refernce not value
    cout<<a<<" "<<b<<endl;
    Swap(a,b);
    cout<<a<<" "<<b<<endl;

    return 0;
}
