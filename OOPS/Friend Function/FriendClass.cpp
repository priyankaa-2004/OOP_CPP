//Creating a Friend Class
#include <iostream>
using namespace std;

// forward declaration->compiler ko bata rahe ho ki class complex aage hai
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    /*int sumReal(complex o1,complex o2){
        return (o1.a+o2.a);// this throws an error because a and b are data memebers of class complex which is yet to be defined->hence will write the declaration of this function later on and only define it here
    }*/
    int sumReal(complex, complex);
    int sumComp(complex,complex);
};

class complex
{
    int a, b;
    /*//individually declaring functions as friends
    friend int calculator::sumReal(complex, complex); // ek class ke function ko dusre class ka friend banaya-->calculator ke sumreal func ko dost bana lo uske private datas dedo
    friend int calculator::sumComp(complex, complex); */

    //alternate: declaring the whole class as friend
    friend class calculator;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnum()
    {
        cout << a << " + " << b << "i" << endl;
    }
};


int calculator::sumReal(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumComp(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setdata(1, 4);
    o1.printnum();

    o2.setdata(5, 8);
    o2.printnum();

    calculator calc;

    int res = calc.sumReal(o1, o2);
    cout << "sum of real part of o1 and o2 is " << res << endl;

    int resc = calc.sumComp(o1, o2);
    cout << "sum of complex part of o1 and o2 is " << resc << endl;

    return 0;
}
