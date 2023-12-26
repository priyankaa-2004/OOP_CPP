//swapping values using friend function (also using reference variable)
#include<iostream>
using namespace std;

//forward declaration
class c2;

class c1{
    int val1;
    public:
    void setdata(int a){
        val1=a;
    }
    void display(){
        cout<<val1<<endl;
    }
    friend void swap(c1 &,c2 &);
};

class c2{
    int val2;
    public:
    void setdata(int a){
        val2=a;
    }
    void display(){
        cout<<val2<<endl;
    }
    friend void swap(c1 &,c2 &);
};

void swap(c1 &x, c2 &y){
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}


int main(){
    c1 objc1;
    c2 objc2;

    cout<<"values before swapping: "<<endl;

    objc1.setdata(44);
    objc1.display();
    objc2.setdata(56);
    objc2.display();
    
    swap(objc1,objc2);

    cout<<"values after swapping: "<<endl;

    objc1.display();
    objc2.display();

    return 0;
} 