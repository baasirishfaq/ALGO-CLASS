#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    int usernumber[tc];

    for (int i = 0; i < tc; i++)
    {
        cin >> usernumber[i];
    }

    for (int i = 0; i < tc; i++)
    {
        cout << "1 " << usernumber[i] - 3 << " 1"
             << " 1" << endl;
    }
}