/*
Call by Value Swap Function
As shown in Code Snippet 1, we created a swap function which is taking two parameters “int a” and “int b”.
In function body values of the variable, “a” and “b” are swapped.
An example program is shown in Code Snippet 2, which calls the swap function and passes values to it.

Call by Pointer in C++
A call by the pointer is a method in C++ to pass the values to the function arguments.
In the case of call by pointer, the address of actual parameters is sent to the formal parameter,
which means that if we change the values inside the function that will affect the actual values.
An example program for the call by reference is shown in Code Snippet 3.

Call by Reference in C++
Call by reference is a method in C++ to pass the values to the function arguments.
In the case of call by reference, the reference of actual parameters is sent to the formal parameter,
 which means that if we change the values inside the function that will affect the actual values.
 An example program for a call by reference is shown in Code Snippet 5.

*/
#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// // This will not swap a and b
// void swap(int a, int b)
// {                 // temp a  b
//     int temp = a; //  4   4  5
//     a = b;        //  4   5  5
//     b = temp;     //  4   5  4
// }

// // Call by reference using pointers
// void swapPointer(int *a, int *b)
// {                  // temp a  b
//     int temp = *a; //  4   4  5
//     *a = *b;       //  4   5  5
//     *b = temp;     //  4   5  4
// }

// Call by reference using C++ reference Variables
int &
// void
swapReferenceVar(int &a, int &b)
{                 // temp a  b
    int temp = a; //  4   4  5
    a = b;        //  4   5  5
    b = temp;     //  4   5  4
    return a;
}

int main()
{
    int x = 4, y = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    // swap(x, y); // This will not swap a and b

    // swapPointer(&x, &y); //This will swap a and b using pointer reference

    // swapReferenceVar(x, y); // This will swap a and b using reference variables
    swapReferenceVar(x, y) = 766; // This will swap a and b using reference variables
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    return 0;
}
