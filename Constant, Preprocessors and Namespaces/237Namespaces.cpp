#include <iostream>
using namespace std;

namespace First
{
    void fun()
    {
        cout << "First\n";
    }
}

namespace Second
{
    void fun()
    {
        cout << "Second\n";
    }
}
int main()
{
    // fun() - Throws Error.

    First::fun();
    Second::fun();
    return 0;
}
