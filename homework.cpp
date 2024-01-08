#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    while (n != 0)
    {
        if (n % 2 == 0)
        {
            cout << "it is power of 2";
            break;
        }
        else
        {
            cout << "not power of 2";
            break;
        }
    }
};
