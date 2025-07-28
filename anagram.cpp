#include <iostream>
#include <algorithm>  // For sort()
using namespace std;

bool isAnagram(string s, string t) {
    // If lengths are different, they cannot be anagrams
    if (s.length() != t.length())
        return false;

    // Sort both strings
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    // Compare the sorted strings
    return s == t;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (isAnagram(str1, str2))
        cout << "Yes, they are anagrams!" << endl;
    else
        cout << "No, they are not anagrams." << endl;

    return 0;
}
