#include<iostream>
using namespace std;

class baseclass{
    public:
    int var_base=1;
    virtual void display(){//bcz of virtual keyword->base class ka pointer jisko point kar raha ho usika display ko print karna
        cout<<"display the base varr: "<<var_base<<endl;
    }
};

class derivedclass : public baseclass{
    public:
    int var_derived=2;
    void display(){
        cout<<"display the base varr: "<<var_base<<endl;
        cout<<"display the derived varr: "<<var_derived<<endl;
    }
};

int main(){
    baseclass * base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;
    base_class_pointer = & obj_derived;  
    base_class_pointer->display();//display function of derived class will be called coz 

    //aapne display function ko virtual kiya hai ki nahi.. ye baat decide karegi ki aapka actual mein konsa function hai jisse apka object bind hua hai



return 0;
}