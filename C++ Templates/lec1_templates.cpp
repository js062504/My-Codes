//  class->object  :: template->class
// Template is basically when we want to use many classes with similar structure just the variables could be of different type
// eg. class of int type,class of float type,class of char type 
// here template can be used
// Why use Template?
// Ans.  1. DRY principle(Do Not Repeat Yourself)
//       2. Generic programming
// Syntax for Templates
/*
template <class T>
class vector{           // t can be int,float,char.....
    T *arr;
    public:
    vector(){}
};
eg. vector<int> myVect;
    vector<float> myFVect;
*/
#include <iostream>
using namespace std;
// now, for float we just need to make a template like below and put T wherever u want it to let'say float,int,char...
template <class T> 
class vector
{
    public:
        T *arr;
        int size;
        vector(int m)
        {
            size = m;
            arr = new T[size];
        }
    T dotProduct(vector &v){
        float d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
 
int main()
{
    vector<float> v1(3); //vector 1
    v1.arr[0] = 4.2;
    v1.arr[1] = 3.6;
    v1.arr[2] = 1.45;
    vector<float> v2(3); //vector 2
    v2.arr[0]=1.43;
    v2.arr[1]=0.98;
    v2.arr[2]=1.34;

    float a = v1.dotProduct(v2);
    cout<<a<<endl;

    return 0;
}