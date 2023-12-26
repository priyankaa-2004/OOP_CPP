//passing objects as arguments
//que-- complex num addition 
#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    void setdata(int v1,int v2){
        a=v1;b=v2;
    }
    void sumofdata(complex o1,complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void displaydata(){
        cout<<"the sum is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
    complex c1,c2,c3;
     
    c1.setdata(5,6);
    c1.displaydata();

    c2.setdata(8,9);
    c2.displaydata();

    c3.sumofdata(c1,c2);
    c3.displaydata(); 

return 0;
}