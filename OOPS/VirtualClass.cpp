//Virtual class
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void roll_no(int r)
    {
        roll = r;
    }
    void print_roll(void)
    {
        cout << "your roll number is " << roll << endl;
    }
};

class test : virtual public Student
{
protected:
    int maths, physics;

public:
    void marks(int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "marks of maths and physics are " << maths << " , " << physics << endl;
    }
};

class sports : virtual public Student
{
protected:
    int score;

public:
    void set_score(int s)
    {
        score = s;
    }
    void print_score(void)
    {
        cout << "score is " << score << endl;
    }
};

class result : public test, public sports
{
protected:
    int res;

public:
    void show_result()
    {
        res = maths + physics + score;
        print_roll();
        print_marks();
        print_score();
        cout << "the result is " << res << endl;
    }
};

int main()
{
    result pipi;
    pipi.roll_no(19);
    pipi.marks(42, 41);
    pipi.set_score(46);
    pipi.show_result();
    return 0;
}