#include <iostream>
#include <string>
#define pi 3.14

using namespace std;

int glo = 13;

void sum()
{
    int a;
    cout << glo << endl;
}

int main()
{
    int glo = 25;
    cout << glo << endl;
    glo = 7;
    cout << glo << endl;
    cout << pi << endl;
    sum();
    bool is_true = false;
    cout << is_true << endl;
    is_true = true;
    cout << is_true << endl;

    return 0;
}

// sizeof() funciton use to find the hole array(not only one element but size of the all element present in the array), variable size