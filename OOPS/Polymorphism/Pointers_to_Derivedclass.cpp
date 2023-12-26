#include<iostream>
using namespace std;

class baseclass{
    public:
    int var_base;
    void display(){
        cout<<"display the base varr: "<<var_base<<endl;
    }
};

class derivedclass : public baseclass{
    public:
    int var_derived;
    void display(){
        cout<<"display the base varr: "<<var_base<<endl;
        cout<<"display the derived varr: "<<var_derived<<endl;
    }
};

int main(){
    baseclass * base_class_pointer; //ek pointer(of base class type) banaya jo baseclass ke object ko point karega
    baseclass obj_base; //object of base class
    derivedclass obj_derived;
    base_class_pointer = &obj_derived;  //base class ka pointer derived class ke object ko point kar sakta hai//pointing base class pointer to derived class object

    //agar aapne base class ke pointer ko derived class ke object se point kara diya then agar uss pointer ki help se agar display function run karoge toh base class ka display function run hoga

    base_class_pointer->var_base=34;    //accessing var base using bas class pointer
    base_class_pointer->display();  //base class ke display ko run karega//this means pointer jis type ka hota hai vo usi function ke saath bind karta hai(late binding)

    //can we access var_derived using base class pointer?-->no
    // base_class_pointer->var_derived=34; *ERROR*

    derivedclass * derived_class_pointer;   //derived class type ka pointer abb ye derivedclass ke display function se bind ho jayega
    derived_class_pointer->var_derived=56;

    // can we access var base using derived class variable?->yes!
    derived_class_pointer->var_base=66;
    
    derived_class_pointer->display();

return 0;
}