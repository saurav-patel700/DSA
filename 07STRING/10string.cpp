// Input a string of length less than 10 and convert it into integer without using builtin function.
// Input : "3244"
// Output : 3244
// Input : "12"
// Output : 12

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int num = 0;

    for (int i = 0; i < s.length(); i++) {
        num = num * 10 + (s[i] - '0');
    }

    cout << num;

    return 0;
}
