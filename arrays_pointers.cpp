#include <iostream>
#include <string>

using namespace std;

int main()
{
    // // Array example
    int marks[] = {23, 45, 13, 2003};

    // int mathmarks[4];
    // mathmarks[0] = 113;
    // mathmarks[1] = 123;
    // mathmarks[2] = 1123;
    // mathmarks[3] = 103;


    // cout << "these are math marks" << endl;
    // cout << mathmarks[0] << endl;
    // cout << mathmarks[1] << endl;
    // cout << mathmarks[2] << endl;
    // cout << mathmarks[3] << endl;

    // cout << endl;

    // cout << "these are marks" << endl;
    // // you can change the value of an array
    // marks[3] = 2007;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // cout << endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "The value of marks " << i << marks[i] << endl;
    // }

    // pointer and arrays
    int *p = marks;
    // first print p and after increase one
    // cout << *(p++) << endl;
    // first increase and after print
    // cout << *(++p) << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of *(p + " << i << ") is " << *(p + i) << endl;
    }

    return 0;
}