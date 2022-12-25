// inline function and inline not use in the big function and static function
// Inline Functions in C++
// Inline functions are used to reduce the function call.
// When one function is being called multiply times in the program it increases the execution time,
// so inline function is used to reduce time and increase program efficiency.
// If the inline function is being used when the function is called,
// the inline function expands the whole function code at the point of a function call,
// instead of running the function.
// Inline functions are considered to be used when the function is small otherwise it will not perform well.
// Inline is not recommended when static variables are being used in the function.

#include <iostream>
#include <string>

using namespace std;

inline int product(int a, int b)
{
    // not recommended to use below lines with inline funcitons
    // static int c = 0; // this executes only once
    // c = c + 1; // next time this function is run, the value of c will be retained
    return a * b;
}

float moneyreceived(int currentmoney, float factor = 1.04)
{
    return currentmoney * factor;
}

// int strlen(const char *p)
// {

// }

int main()
{
    int a, b;
    cout << "Enter the value of a and b : " << endl;
    cin >> a >> b;
    cout << "The product of a and b is " << product(a, b) << endl;
    int money = 10000;
    cout << "If you have " << money << " Rs in your bank account, you will recice " << moneyreceived(money) << " Rs after 1 year" << endl;
    cout << "For VIP: If you have " << money << " Rs in your bank account, you will recive " << moneyreceived(money, 1.1) << " Rs after 1 year";
    return 0;
}