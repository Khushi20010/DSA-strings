#include <iostream>
#include <string>
using namespace std;

string compressString(string s) {
    string ans = "";
    int count = 1;

    for (int i = 1; i <= s.length(); i++) {
        if (i < s.length() && s[i] == s[i - 1]) {
            count++;
        } else {
            ans += s[i - 1];
            ans += to_string(count);
            count = 1;
        }
    }

    return ans;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    cout << "Compressed: " << compressString(s) << endl;
    return 0;
}
