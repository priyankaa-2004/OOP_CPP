//wap to add 2 complex numbers using friend function
#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    
    void setdata(int n1, int n2){
        a=n1;
        b=n2;
    }
    friend complex sum(complex o1,complex o2);//after this declaration sum doesnot become a member function of class complex->bas ise permission mil jati hai ki vo function iss class ke kuch private data ko access kar sakta hai
    void printnum(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sum(complex o1, complex o2){ //function jo 2 complex numbers leta hai
    complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b)); //will not work bcz a and b are private data of class complex->hence we have to create a friend function for this so that class complex can give permission to this sum function to access the private data of class complex
    return o3;
}

int main(){
    complex c1,c2,sum1;
    c1.setdata(1,4);
    c1.printnum();

    //c1.sum(c2,c5);->invalid syntax since the function sum() is not in the scope of class it cannot be accessed with the objects of class 

    c2.setdata(5,8);
    c2.printnum();

    sum1=sum(c1,c2);//but sum1 is also an object of class then how can it be used here?->here sum1 is not used to access the function sum(), it is only used to store the value returned by the function
    sum1.printnum();

return 0;
}