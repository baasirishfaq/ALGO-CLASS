#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int n, flag = 1;
    cin >> n;

    while (n >= 0)
    {

        if (n == 1)
        {
            flag = 0;
            break;
        }
        else if (n == 0)
        {
            flag = 1;
            break;
        }
        else if (n % 2 == 1)
        {
            flag = 1;
            break;
        }

        n = n / 2;
        flag = 0;
    }
    if (flag == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
};
