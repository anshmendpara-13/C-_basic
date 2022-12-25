#include <iostream>
#include <string>

using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b = 13, int c = 2003)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printdata();
};

void simple::printdata()
{
    cout << "The value of data1, data2 and data3 is " << data1 << ", " << data2 << ", " << data3 << endl;
}

int main()
{
    simple s(25, 07);
    s.printdata();

    return 0;
}