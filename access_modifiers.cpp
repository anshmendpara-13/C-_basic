#include <iostream>
using namespace std;

class Base
{
protected:
    int a = 10;

private:
    int b = 20;
};

class Derived : protected Base
{
};

int main()
{
    Base e;
    Derived d;
    cout << d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}
