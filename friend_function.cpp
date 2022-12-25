// prectical 6
// friend function

#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    friend Complex sumComplex(Complex o1, Complex o2);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    inline void printNumber()

    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    int x, y;
    cout << "Enter real and imag number " << endl;
    cin >> x >> y;
    c1.setNumber(x, y);
    c1.printNumber();
    cout << "Enter real and imag number " << endl;
    cin >> x >> y;
    c2.setNumber(x, y);
    c2.printNumber();

    sum = sumComplex(c1, c2);

    sum.printNumber();

    return 0;
}

// activity usecase
// -->  bpo

// for usecase
// search
// negosiation
// upload input
// upload
// queiry
// shipment
// payment

// for activity
// search for job
// negation yes upload input perform shipment clientperform  yes send feedback else setleamount and end