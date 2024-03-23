#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Initialize
    unordered_set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);

    // to iterate over the elements in the map
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
    // to find the size of the map;
    cout << "the size of the map is " << s.size() << endl;

    int key = 10;
    if (s.find(key) != s.end())
    {
        cout << "the key is present in the set" << endl;
    }
    else
    {
        cout << "the key is not present in the set" << endl;
    }
}