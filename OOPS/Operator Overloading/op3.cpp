//overloading unary operator 
#include<iostream>
using namespace std;

class increment{
    int a,b,c;
    public:
    increment(int x, int y, int z){
        a=x;b=y;c=z;
    }
    void show(){
        cout<<"a="<<a;
        cout<<"b="<<b;
        cout<<"c="<<c;
    }
    void operator ++(){
        ++a;++b;++c;
        //cout<<"print:"<<a++;  //postfix notation
    }
};

int main(){
    increment ob1(1,2,3);
    ++ob1;
    ob1.show();
return 0;
}