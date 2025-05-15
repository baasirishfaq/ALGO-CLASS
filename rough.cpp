#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    // Sort the strings
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    // Compare sorted strings
    return s == t;

}

int main() {
    string s, t;
    cout << "Enter first string: ";
    getline(cin, s);
    cout << "Enter second string: ";
    getline(cin, t);

    if (isAnagram(s, t)) {
        cout << "They are anagrams." << endl;
    } else {
        cout << "They are NOT anagrams." << endl;
    }

    return 0;
}
