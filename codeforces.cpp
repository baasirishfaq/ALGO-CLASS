#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long l, b, a, cal1, cal2, cal3;

    cin >> l;
    cin >> b;
    cin >> a;

    if (a == 1)
    {
        cal3 = l * b;
        cout<< "if condition entered "<<endl;

    }
    else if (a > 1)
    {
        cal1 = ceil((double)l / a);
        cal2 = ceil((double)b / a);
        cal3 = cal1 * cal2;
        cout<<"did not enter if conditon, else entered"<<endl;
    }
    cout << cal3;
};