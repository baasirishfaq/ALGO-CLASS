#include <bits/stdc++.h>

using namespace std;

int firstUniqChar(string s) {
    
        unordered_map<char, int> charCount;

        for(auto c : s) 
        {
            charCount[c]++;
        }
        for(int i = 0; i < s.size(); i++) 
        {
            if(charCount[s[i]] == 1) 
            {
                return i; // return the index of the first unique character
            }
        }

        return -1; // default return if no unique character found
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int index = firstUniqChar(input);

    if (index == -1) {
        cout << "No unique character found." << endl;
    } else {
        cout << "First unique character: '" << input[index] << "' at index " << index << endl;
    }

    return 0;
}

