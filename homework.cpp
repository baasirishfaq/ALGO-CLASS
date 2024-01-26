#include <bits/stdc++.h>

using namespace std;

// classes...

class Student
{
public:
    int roll_no;
    char gender;
    int mobile;
    int standard;
};

int main()
{

    Student john;
    cin >> john.roll_no;
    cin >> john.gender;
    cin >> john.mobile;
    cin >> john.standard;

    cout << john.roll_no;
    cout << john.gender;
    cout << john.mobile;
    cout << john.standard;
}
