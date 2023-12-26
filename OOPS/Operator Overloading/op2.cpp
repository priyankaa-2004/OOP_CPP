//addition of two objects using operator keyword
#include<iostream>
using namespace std;

class sum{
    int x,y;
    public:
    sum(){}
    sum(int a, int b){
        x=a;y=b;
    }
    sum operator + (sum ob){
        sum ob4;
        ob4.x=x+ob.x;
        ob4.y=y+ob.y;
        return ob4;
    }
    void show(){
        cout<<"x= "<<x;
        cout<<"y= "<<y;
    }
};

int main(){
    sum ob1(2,3),ob2(4,5),ob3;
    ob3=ob1+ob2;
    ob3.show();
return 0;
}