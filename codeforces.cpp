#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, ctr = 0, mainscore;
    cin >> n;
    cin >> k;
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }
    for (int i = 0; i < n + 1; i++)
    {
        cout << "value of i is " << i << " and k is " << k << endl;

        if (i == k)
        {
            cout << "IF -> ENTERED" << endl;
            mainscore = scores[i - 1];
            cout << "mainscore found " << mainscore << endl;
        }
    }
    for (int i = 0; i < n; i++)
    {

        if (scores[i] >= mainscore && scores[i] > 0)
        {
            cout << "compared  " << scores[i] << " with " << mainscore << endl;
            ctr++;
            cout << "player with score " << scores[i] << " is moved ahead current count is " << ctr << endl;
        }
        // else if part to be removed
        else if ((k == 1 && ctr == 0) && (n == k && ctr == 0))
        {
            cout << "ELSE IF ENTERED " << endl;
            ctr = n;
        }
    }
    cout << "final values of ctr is =  " << ctr << endl;
};