#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    // this only contain one element
    Complex *ptr = new Complex;
    ptr->setData(1, 54);
    ptr->getData();

    // Array of Objects
    // in this pointer we cant access the memory and printe the data
    Complex *ptr1 = new Complex[4];
    (ptr1 + 0)->setData(1, 4);
    (ptr1 + 1)->setData(2, 5);
    (ptr1 + 2)->setData(3, 6);
    (ptr1 + 0)->getData();
    (ptr1 + 1)->getData();
    (ptr1 + 2)->getData();

    return 0;
}
