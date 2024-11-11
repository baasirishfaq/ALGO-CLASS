#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    do
    {
        string x;
        int count = 0;
        //cout << "Enter your word: ";
        cin >> x;
        //cout << "Your word is: " << x << endl;

        int endwordindex = x.length() - 1;
        char endword = x[endwordindex];

        if (x.length() > 10)
        {
            for (int i = 1; i < x.length() - 1; i++)
            {
                count++;
            }
            cout << x[0] << count << endword << endl;
        }
        else
        {
            cout << x << endl;
        }

        n--;
    } while (n > 0);

    return 0;
}
