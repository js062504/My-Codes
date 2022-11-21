#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s,float r){
        title=s;
        rating=r;
    }
    virtual void display(){}
};

class CWHVideo : public CWH{
    float videoLength;
    public:
    CWHVideo(string s,float r,float vl) : CWH(s,r){
        videoLength=vl;
    }
    void display(){
        cout<<"Title of Video: "<<title<<endl;
        cout<<"Rating: "<<rating<<" Star"<<endl;
        cout<<"Length of this video is "<<videoLength<<" minutes "<<endl;
    }
};

class CWHText : public CWH{
    int words;
    public:
    CWHText(string s,float r,int wc) : CWH(s,r){
        words=wc;
    }
    void display(){
        cout<<"Text title: "<<title<<endl;
        cout<<"Rating of this text is "<<rating<<endl;
        cout<<"Length of the text is "<<words<<" words "<<endl;
    }
};

int main(){
    string title;
    float rating,vlen;
    int words;
    // For Video
    title="C++ Video Tutorial";
    vlen=4.56;
    rating=4.98;
    CWHVideo djVideo(title,rating,vlen);
    // djVideo.display();

    // For text
    title="C++ Word Tutorial";
    words=56;
    rating=4.87;
    CWHText djWord(title,rating,words);
    // djWord.display();

    CWH *tut[2];
    tut[0] = &djVideo;
    tut[1] = &djWord;

    tut[0]->display();
    tut[1]->display();
    
    return 0;
}
// Rules for Virtual Functions
/* 
1. They cannot be static
2. They are accessed by object pointers
3. Virtual functions can be a friend of another class
*/