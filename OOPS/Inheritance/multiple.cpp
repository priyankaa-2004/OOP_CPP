//multiple inheritance
#include<iostream>
using namespace std;

class base1{
    protected:
    int base1;
    public:
    void set_base1(int b1){
        base1=b1;
    }
};

class base2{
    protected:
    int base2;
    public:
    void set_base2(int b2){
        base2=b2;
    }
};

class derived : public base1, public base2{
    public:
    void show(){
        cout<<"base num 1 is "<<base1<<endl;
        cout<<"base num 2 is "<<base2<<endl;
        cout<<"sum of base 1 and base 2 is "<<(base1+base2)<<endl;
    }
};

int main(){
    derived d1,d2;
    d1.set_base1(3);
    d1.set_base2(8);
    d1.show();
    d2.set_base1(4);
    d2.set_base2(10);
    d2.show();
return 0;
}