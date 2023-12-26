#include<iostream>
using namespace std;

//Forward declaration of class Y nahi toh compiler ko line 13 mein pata kaise chalega ki class Y exist karta hai
class Y;

class X{
    int data;
    public:
    void setdata(int value){
        data=value;
    }
    void getdata(){
        cout<<data<<endl;
    }
    friend void add(X,Y);
};

class Y{
    int num;
    public:
    void setdata(int value){
        num=value;
    }
    void getdata(){
        cout<<num<<endl;
    }
    friend void add(X,Y);
};

void add(X o1, Y o2){
    cout<<"sum of obj of X and Y is "<<o1.data+o2.num<<endl;
}
int main(){
    X a;
    Y b;

    a.setdata(4);
    b.setdata(6);

    a.getdata();
    b.getdata();
    
    add(a,b);

return 0;
}