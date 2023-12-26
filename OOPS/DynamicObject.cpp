// dynamic(during run time of program) initialization of objects --> the programs gets to know which constructor to run after input is taken from user

// a program of compound intrest with 2 parameterized const. used with different datatype of rate
//error in this program
#include <iostream>
using namespace std;

class bank
{
    int principle, yrs;
    float rate;
    float returnval;

public:
    bank() {}
    bank(int p, int y, int r);
    bank(int p, int y, float r);
    void show();
};

void bank ::show()
{
    cout << "Principal valur was " << principle << " return value after " << yrs << " is " << returnval;
}

bank ::bank(int p, int y, int r)
{
    principle = p;
    yrs = y;
    rate = float(r) / 100;
    returnval = principle;
    for (int i = 0; i < y; i++)
    {
        returnval = returnval * (1 + rate);
    }
}

bank ::bank(int p, int y, float r)
{
    principle = p, yrs = y, rate = r;
    returnval = principle;
    for (int i = 0; i < y; i++)
    {
        returnval = returnval * (1 + rate);
    }
}
int main()
{
    bank b1, b2, b3;
    int p, y, r;
    float R;

    cout << "enter p,y,r" << endl;
    cin >> p >> y >> r;
    b1 = bank(p, y, r); // int valur wala function is called after the value is given by the user i.e. after program is run
    b1.show();

    cout << "enter p,y,R";
    cin >> p >> y >> R;
    b2 = bank(p, y, R); // float value wala function is called after the value is given by the user i.e. after program is run
    b2.show();

    b3.show();

    return 0;
}