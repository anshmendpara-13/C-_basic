// // operator overloading is a compile time polymorphism. without changing its original meaning.
// /*
// Operators that can be overloaded
// We can overload

// Unary operators
// Binary operators
// Special operators ( [ ], () etc)

// But, among them, there are some operators that cannot be overloaded. They are

// Scope resolution operator                                : :
// Member selection operator
// Member selection through                                   *

// Pointer to member variable

// Conditional operator                                         ? :
// Sizeof operator                                             sizeof()

// Operators that can be overloaded

// Binary Arithmetic     ->     +, -, *, /, %
// Unary Arithmetic     ->     +, -, ++, —
// Assignment     ->     =, +=,*=, /=,-=, %=
// Bit- wise      ->     & , | , << , >> , ~ , ^
// De-referencing     ->     (->)
// Dynamic memory allocation and De-allocation     ->     New, delete
// Subscript     ->     [ ]
// Function call     ->     ()
// Logical      ->     &,  | |, !
// Relational     ->     >, < , = =, <=, >=
// */



#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // This is automatically called when '+' is used with
    // between two Complex objects
    // Complex operator + (Complex const &obj)
    Complex operator+(Complex c2)
    {
        Complex res;
        res.real = real + c2.real;
        // cout << real << " " << c2.real << endl;
        res.imag = imag + c2.imag;
        // cout << imag << " " << c2.imag << endl;
        return res;
    }
    void print() { cout << real << " + i" << imag << '\n'; }
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    // c1.print();
    // c2.print();
    Complex c3 = c1 + c2;
    c3.print();
}



// #include <iostream>
// using namespace std;

// class ComplexNumber
// {
// private:
//     int real;
//     int imaginary;

// public:
//     ComplexNumber(int real, int imaginary)
//     {
//         this->real = real;
//         this->imaginary = imaginary;
//     }

//     ComplexNumber operator+(ComplexNumber c2)
//     {
//         ComplexNumber c3(0, 0);
//         c3.real = this->real + c2.real;
//         c3.imaginary = this->imaginary + c2.imaginary;
//         return c3;
//     }
//     void print()
//     {
//         cout << real << " + i" << imaginary;
//     }
// };
// int main()
// {
//     ComplexNumber c1(3, 5);
//     ComplexNumber c2(2, 4);
//     ComplexNumber c3 = c1 + c2;
//     c3.print();
//     return 0;
// }