#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 9, 9, 9, 9, 2, 2, 4};

    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> umap;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        int key = arr[i];
        umap[key]++;
    }
    for (auto it = umap.begin(); it != umap.end(); it++)
    {
        cout << it->first << " is " << it->second << " times" << endl;
    }
    cout << "N is " << n;
}