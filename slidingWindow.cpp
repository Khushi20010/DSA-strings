#include<iostream>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int maxVowels(string s, int n) {
    int count = 0, maxV = 0;

    for (int i = 0; i < s.length(); i++) {
        if (isVowel(s[i])) count++;       // Add current char

        if (i >= n && isVowel(s[i - n]))  // Remove char leaving window
            count--;

        if (i >= n- 1)
            maxV = max(maxV, count);      // Update max
    }

    return maxV;
}

int main() {
    string s;
    int n;
    cout << "Enter string: ";
    cin >> s;
    cout << "Enter window size: ";
    cin >> n;

    cout << "Max vowels in any substring of size " << n << ": " << maxVowels(s, n);
    return 0;
}
