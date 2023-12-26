// multilevel inheritence
#include <iostream>
using namespace std;

class student
{
protected:
    int rollnum;

public:
    void set_roll(int r)
    {
        rollnum = r;
    }
    void get_roll()
    {
        cout << "the roll num is " << rollnum << endl;
    }
};

class exam : public student
{
protected:
    float maths, science;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        science = m2;
    }
    void get_marks()
    {
        cout << "marks of maths and science are " << maths << " and " << science << endl;
    }
};

class result : public exam
{
    float result;

public:
    void display_result()
    {
        get_roll();
        get_marks();
        cout << "the result is " << ((maths + science) / 2) << " % " << endl;
    }
};

int main()
{
    result pipi;
    pipi.set_roll(19);
    pipi.set_marks(97, 94);
    pipi.display_result();
    return 0;
}