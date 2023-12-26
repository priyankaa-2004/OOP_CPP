//constructors 1.default constr.,2. parameterized constr. , 3. constr. overloading
#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex();     //DEFAULT CONSTRUCTOR same name as the class name

    complex(int x,int y){      // PARAMETERIZED CONSTUCTOR AND CONSTR. OVERLOADING
        a=x;
        b=y;
    }

    complex(int x){    // PARAMETERISED CONSTRUCTOR AND CONSTR. OVERLOADING
        a=x;
        b=0;
    }

    void print(){
        cout<<"the num is "<<a<<"+"<<b<<"i"<<endl;
    }
};

complex::complex(){    //defining the function
     a=10,b=20;
}

int main(){
    complex c1;     //no need to call the function

    //passing the value in parameters?

    //implicit call
    complex c2(4,5);

    //explicit call
    complex c3=complex(7);        
    c1.print();
    c2.print();
    c3.print();
return 0;
}