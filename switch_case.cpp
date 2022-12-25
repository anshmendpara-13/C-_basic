#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    cout << "Tell me your age : " << endl;
    cin >> age;

    // there two method to emplement the program one is using if else condition and other one is switch case

    // 1. Selection control structure: If else-if else ladder

    // if((age<18) && (age>0)){
    //     cout<<"You can not come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"You are not yet born"<<endl;
    // }
    // else{
    //     cout<<"You can come to the party"<<endl;
    // }

    // 2. Selection control structure: Switch Case statements
    switch (age)
    {
    case 18:
        cout << "you are 18" << endl;
        break;

    case 25:
        cout << "you are 25" << endl;
        break;

    case 2:
        cout << "you are 2" << endl;
        break;

    default:
        cout << "no special cases" << endl;
    }

    return 0;
}