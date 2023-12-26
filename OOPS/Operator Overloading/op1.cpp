//adding 2 objects without operator overloading
#include<iostream>
using namespace std;

class num{
    public:
    int x,y;
    num(){}
    num(int a, int b){
        x=a;y=b;
    }
    void show(){
        cout<<"x= "<<x;
        cout<<"y= "<<y;
    }
};

int main(){
    num n1(2,3),n2(4,5),n3;
    n3.x=n1.x+n2.x;
    n3.y=n1.y+n2.y;
    n3.show();

return 0;
}