#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    unordered_map<string, int> mp;
    string text("Hello world, this is a simple sentence. Hello again, world!");
    string word;

    for (char c : text)
    {

        if (isalpha(c))
        {
            word += c;
        }
        else if (!word.empty())
        {
            mp[word]++;
            word.clear();
        }
    }

    if (!word.empty())
    {
        mp[word]++;
    }

    for (auto pair : mp)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
