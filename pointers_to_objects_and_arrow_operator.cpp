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
    Complex *ptr = new Complex;
    (*ptr).setData(1, 54);
    (*(ptr+1)).setData(2, 55);
    
    (*ptr).getData();
    (*(ptr+1)).getData();

    return 0;
}
