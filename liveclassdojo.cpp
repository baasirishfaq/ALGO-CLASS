#include <bits/stdc++.h>

using namespace std;

class reportcard
{
public:
    unordered_map<string, int> data;

    void insert(const string &name, int score)
    {
        data[name] = score;
    }

    int retrieve(const string &name)
    {
        if (data.find(name) != data.end())
        {
            return data[name];
        }
        else
            return -1;
    }

    void display()
    {
        for (auto it = data.begin(); it != data.end(); it++)
        {
            cout << "score of " << it->first << " is " << it->second << endl;
        }
    }
};

int main()
{
    reportcard hashmap;
    hashmap.insert("Alice", 85);
    hashmap.insert("Bob", 92);
    hashmap.insert("Charlie", 78);
    hashmap.display();
}