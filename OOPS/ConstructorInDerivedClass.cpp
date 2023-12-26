//constructor in derived class
#include<iostream>
using namespace std;

class base1{
    int data1;
    public:
    base1(int i){
        data1=i;
    }
    void displaybase1(){
        cout<<"value of data1 "<<data1<<endl;
    }
};

class base2{
    int data2;
    public:
    base2(int i){
        data2=i;
    }
    void displaybase2(){
        cout<<"value of data2 "<<data2<<endl;
    }
};

class derived : public base1, public base2{
    int d1,d2;
    public:
    derived(int a,int b, int c, int d) : base1(a), base2(b){
        d1=c;
        d2=d;
        cout<<"derived class constr was called"<<endl;
    }
    void displayder(){
        cout<<"value of derived 1 is "<<d1<<endl;
        cout<<"value of derived 2 is "<<d2<<endl;
    }
};

int main(){
    derived pihu(1,2,3,4);
    pihu.displaybase1();
    pihu.displaybase2();
    pihu.displayder();
return 0;
}