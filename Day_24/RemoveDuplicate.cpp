//Q4. Write a program to Remove duplicate characters.


#include <iostream>
using namespace std;
int main() {
    string s, ans = "";
    cin >> s;

    for (int i = 0; i < s.length(); i++) 
    {
        bool found = false;

        for (int j = 0; j < ans.length(); j++) 
        {
            if (s[i] == ans[j]) 
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            ans += s[i];
        }
    }

    cout << ans;
    return 0;
}