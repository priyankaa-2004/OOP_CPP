//overloading binary operator 
#include<iostream>
using namespace std;

class increment{
    int a,b,c;
    public:
    increment(){}
    increment(int x){
        a=x;
    }
    void show(){
        cout<<"a="<<a;
        // cout<<"b="<<b;
        // cout<<"c="<<c;
    }
    increment operator *(increment t){
        increment abc;
        abc.a=a*t.a;
        return abc;
    }
};

int main(){
    increment ob1,obj2(2),obj3(4);
    ob1=obj2*obj3;
    ob1.show();
return 0;
}