
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;
    int n = s.length();

    for (int i = 1; i < n - 1; i++) {
        if (s[i - 1] != s[i] && s[i]!=s[i+1]) {
            count++;
        }
    }

    cout << count;
    return 0;
}
