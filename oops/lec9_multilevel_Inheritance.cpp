#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// (Base Class)Student--->Exam--->Result(Multilevel Inheritance)
// Student-->Exam-->Result is called as Inheritance Path
class Student{
    protected:
    int roll_no;
    public:
    void setRollNumber(int);
    void getRollNumber(void);
};
void Student :: setRollNumber(int a){
    roll_no=a;
}
void Student :: getRollNumber(){
    cout<<"The RollNo. of student is "<<roll_no<<endl;
}

class Exam : public Student{
    protected:
    float maths;
    float physics;
    public:
    void setMarks(float,float);
    void getMarks(void);
};

void Exam :: setMarks(float a,float b){
    maths=a;
    physics=b;
}
void Exam :: getMarks(){
    cout<<"The marks of student in maths is "<<maths<<endl;
    cout<<"The marks of student in physics is "<<physics<<endl;
}

class Result : public Exam{
    float percentage;
    public:
    void display(){
        cout<<"The overall percentage of marks is "<<fixed<<setprecision(2)<<(float)(maths+physics)/2<<"%"<<endl;
    }
};

int main(){
    
    Result rep1;
    rep1.setRollNumber(45);
    rep1.getRollNumber();
    rep1.setMarks(90,98);
    rep1.getMarks();
    rep1.display();


    return 0;
}
