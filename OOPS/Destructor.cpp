// destructors
//run the program and analyse the output to know more about destructors
#include <iostream>
using namespace std;

int count = 0; // global variable
class num
{
public:
    num()
    {
        count++;
        cout << "constructor is called for object " << count << endl;
    }
    ~num()
    {
        cout << "destructor is called for object " << count << endl;
        count--;
    }
};

int main()
{
    cout << "entering main block" << endl;
    cout << "creating object 1" << endl;
    num n1;
    {
        cout << "entering the block" << endl;
        cout << "creating 2 new objects" << endl;
        num n2, n3;
        cout << "exiting the block" << endl;
    }
    cout << "out of the block" << endl;
    return 0;
}