#include <iostream>
using namespace std;

// Object arrays using pointers.
class Shop{
    int id;
    float price;
    public:
    void setData(int a,float b){
        id=a;
        price=b;
    }
    void getData(){
        cout<<"The id of this item is "<<id<<endl;
        cout<<"The price of this item is "<<price<<endl;
    }
};
int main(){
    int size;
    cout<<"Enter the size of array "<<endl;
    cin>>size;
    Shop *sh=new Shop[size];
    Shop *shptr=sh;
    for(int i=0; i<size; i++){
        int m;
        float n;
        cout<<"Enter two numbers "<<endl;
        cin>>m>>n;
        sh->setData(m,n);
        sh++;
    }
    for(int i=0; i<size; i++){
        shptr->getData();
        shptr++;
    }
    
    return 0;
}