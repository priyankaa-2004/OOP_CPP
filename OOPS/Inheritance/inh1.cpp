#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;
    Employee(){}
    Employee(int n)
    {
        id = n;
        salary = 34.0;
    }
};

// creating a derived class(Programmer) from a base class(Employee)
//How to declare a derived class????
// class {{derived class name}} : {{visibility mode}} {{base class name}}

class Programmer : public Employee    //visibility code by default is private, if public is not mentioned then skill.id will show an error
{
public:
    Programmer(int n)
    {
        id = n;
    }
    int languages = 9;
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee pipi(12), pihu(11);
    cout << pipi.salary << endl;
    cout << pihu.salary << endl;
    Programmer skill(10);
    cout << skill.languages << endl;
    cout << skill.id << endl;
    skill.getData();
    return 0;
}