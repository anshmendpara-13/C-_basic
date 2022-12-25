#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter number : ";
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cnt = 1;
            break;
        }
    }
    if (cnt == 1)
    {
        cout << "not prime" << endl;
    }
    else
    {
        cout << "prime" << endl;
    }

    // cout <<  <<endl;
    return 0;
}