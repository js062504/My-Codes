#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// useful classes for working with files in C++
// 1. fstreambase
// 2. ifstream ->derived from fstreambase
// 3. ofstream ->derived from fstreambase
// 2 ways to open a file 
// 1. using the constructor
// 2. using the member function open() of the class
// object is created of type ofstream and the file 'sampleFile1.txt' is passed to it
// string 'str' is passed to object 'out'
// in>>str2;
// For string with spaces use getline
int main(){
    // using constructors
    // writing the file
    /*string str="Hello Everyone there!";
    ofstream out("sampleFile1.txt");
    out<<str;*/

    // reading the file
    /*string str2;
    ifstream in("SampleFile1.txt");
    getline(in,str2);
    cout<<str2<<endl;*/

    // using open() function

    // writing the file
    /*string str="Hello Guyss";
    ofstream out;
    out.open("sampleFile1.txt");
    out<<str;
    out.close();*/

    // reading the file
    /*string str1;
    ifstream in;
    in.open("sampleFile1.txt");
    getline(in,str1);
    cout<<str1<<endl;*/

    // eof() end of file usage for printing all the lines.
    ofstream out;
    out.open("sampleFile1.txt");

    string str1;
    cout<<"Enter the 1st string: "<<endl;
    getline(cin,str1);
    out<<str1<<"\n";

    string str2;
    cout<<"Enter the 2nd string: "<<endl;
    getline(cin,str2);
    out<<str2<<"\n";

    string str3;
    cout<<"Enter the 3rd string: "<<endl;
    getline(cin,str3);
    out<<str3;

    out.close();
    
    ifstream in;
    in.open("sampleFile1.txt");
    cout<<"These are the entered strings: "<<endl;
    while(in.eof()==0){
        string str;
        getline(in,str);
        cout<<str<<endl;
    }
    in.close();

    return 0;
}