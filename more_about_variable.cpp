// #include <iostream>

// using namespace std;

// int c = 45;
// // this is globle variable

// int main()
// {

//     // *************Build in Data types****************
//     // int a, b, c;
//     // cout<<"Enter the value of a:"<<endl;
//     // cin>>a;
//     // cout<<"Enter the value of b:"<<endl;
//     // cin>>b;
//     // c = a + b;
//     // cout<<"The sum is "<<c<<endl;
//     // cout<<"The global c is "<<::c;

//     // ************* Float, double and long double Literals****************
//     // float d=34.4F;
//     // long double e = 34.4L;
//     // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
//     // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
//     // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
//     // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
//     // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
//     // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;

//     // *************Reference Variables****************
//     // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
//     float x = 455;
//     float &y = x;

//     float *z = &x;
//     float **k = &z;

//     cout << x << endl;
//     cout << y << endl;
//     cout << z << endl;
//     cout << k << endl;

//     // *************Typecasting****************
//     // int a = 45;
//     // float b = 45.46;
//     // cout<<"The value of a is "<<(float)a<<endl;
//     // cout<<"The value of a is "<<float(a)<<endl;

//     // cout<<"The value of b is "<<(int)b<<endl;
//     // cout<<"The value of b is "<<int(b)<<endl;
//     // int c = int(b);

//     // cout<<"The expression is "<<a + b<<endl;
//     // cout<<"The expression is "<<a + int(b)<<endl;
//     // cout<<"The expression is "<<a + (int)b<<endl;

//     return 0;
// }



#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // int a = 34; 
    // cout<<"The value of a was: "<<a;
    // a = 45; 
    // cout<<"The value of a is: "<<a;

    // // Constants in C++
    // const int a = 3;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45; // You will get an error because a is a constant
    // cout<<"The value of a is: "<<a<<endl;

    // // Manipulators in C++
    // int a =3, b=78, c=1233;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    // cout<<"The value of a is: "<<setw(5)<<a<<endl;
    // cout<<"The value of b is: "<<setw(5)<<b<<endl;
    // cout<<"The value of c is: "<<setw(5)<<c<<endl;


    // Operator Precedence
    int a =3, b=4;
    // int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;
    return 0;
}
