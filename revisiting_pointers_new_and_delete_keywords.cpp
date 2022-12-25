// #include <iostream>
// using namespace std;

// int main()
// {
//     // Basic Example
//     int a = 4;
//     int *ptr = &a;
//     cout << "The value of a is " << *(ptr) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     float *p = new float(40.78);
//     cout << "The value at address p is " << *(p) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int *arr = new int[3];
//     arr[0] = 10;
//     arr[1] = 20;
//     arr[2] = 30;
//     cout << "The value of arr[0] is " << arr[0] << endl;
//     cout << "The value of arr[1] is " << arr[1] << endl;
//     cout << "The value of arr[2] is " << arr[2] << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{

    int *arr = new int[2];
    arr[0] = 10;
    arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;
    
    delete[] arr;
    // some time delete are work but correct values are print in the array
    // example- below test case we delete the array but printing values are correct

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    // cout << "The value of arr[2] is " << arr[2] << endl;
    // cout << "The value of arr[3] is " << arr[3] << endl;
    // cout << "The value of arr[4] is " << arr[4] << endl;

    return 0;
}
