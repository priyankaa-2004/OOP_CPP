#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter a,b: ";
    cin >> a >> b;
    try
    {
        if (b != 0)
        {
            c = a / b;
            cout << c << endl;
            ;
        }
        else
        {
            throw(b);
        }
    }
    catch (int b)
    {
        cout << "not possibble" << endl;
        ;
    }

    return 0;
}