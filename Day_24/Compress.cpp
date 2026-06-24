//Q2. Write a proram to Compress a string.


#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;

    string ans = "";
    int count = 1;

    for (int i = 1; i<=s.length(); i++) {
        if (s[i] == s[i-1])
            count++;
        else {
            ans += s[i-1];
            ans += to_string(count);
            count = 1;
        }
    }
    cout << ans;
    return 0;
}