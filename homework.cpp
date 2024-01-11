#include <bits/stdc++.h>
using namespace std;

int main()

{
    int tc;
    cin >> tc;
    int numbers[tc];

    for (int i = 0; i < tc; i++)
    {
        cin >> numbers[i];
    }

    for (int j = 0; j < tc; j++)
    {
        if ((numbers[j] % 2 == 0) && (numbers[j] % 7 == 0))
        {
            cout << "Alice" << endl;
        }
        else if ((numbers[j] % 2 != 0) && (numbers[j] % 9 == 0))
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Charlie" << endl;
        }
    }
}