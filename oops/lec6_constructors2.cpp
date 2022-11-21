#include <bits/stdc++.h>
using namespace std;

class point{
    int x1,y1,x2,y2;
    friend float distance(int x1,int y1,int x2,int y2);
    public:
        point(int a,int b,int c,int d){
            x1=a;
            y1=b;
            x2=c;
            y2=d;    
        }
        point(int a,int b=0,int c=2,int d=4);    //-->Default arguments in Constructor
        void displayPoint(){
            cout<<"The co-ordinates entered are ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<")"<<endl;
        }
};
float distance(int x1,int y1,int x2,int y2){
    int g=pow((x2-x1),2);
    int h=pow((y2-y1),2);
    return (float)sqrt(g+h);
}
int main(){
    point p=point(0,0,1,1);
    p.displayPoint();
    cout<<"The distance between entered co-ordinates are "<<fixed<<setprecision(2)<<distance(0,0,1,1)<<endl;
    return 0;
}
