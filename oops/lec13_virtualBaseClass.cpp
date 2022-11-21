#include <iostream>
using namespace std;

class Student{
    protected:
    int roll_no;
    public:
    void set_number(int a){
        roll_no = a;
    }
    void printNumber(){
        cout<<"Your Roll.No is "<<roll_no<<endl;
    }
};

class Test: virtual public Student{
    protected:
    float maths,physics;
    public:
    void set_marks(float f1,float f2){
        maths=f1;
        physics=f2;
    }
    void print_marks(){
        cout<<"Marks in maths is "<<maths<<endl;
        cout<<"Marks in physics is "<<physics<<endl;
    }
};
// here "virtual public"  or "public virtual"  both will work same
class Sports: virtual public Student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score=sc;
    }
    void print_score(void){
        cout<<"Your sports score is "<<score<<endl;
    }
};

class Result: public Test, public Sports{
    private:
    float total;
    public:
    void display(){
        total=maths+physics+score;
        printNumber();
        print_marks();
        print_score();
        cout<<"The total score is "<<total<<endl;
    }
};

int main(){
    Result prs;
    prs.set_number(34);
    prs.set_marks(90,70);
    prs.set_score(45.8);
    prs.display();
    
    return 0;
}