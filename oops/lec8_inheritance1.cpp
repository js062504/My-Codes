#include <iostream>
using namespace std;

class Base{
    // Protected members are (almost) private but can be inherited. 
    protected:  
    int a;
    private:
    int b;
    public:
    void setA(int g){
        a=g;
    }

};
/*  Brief about public,private ,protected
                        public derivation   private derivation  protected derivation 
    1.public member       public               private                protected
    2.private               not inherited       not inherited       not inherited
    3.protected             protected              private          protected

 */


class Derived : public Base{
    public:
    void getA(){
        cout<<a<<endl;
    }
};
int main(){
    Derived d;
    d.setA(34);
    d.getA();
    return 0;
}